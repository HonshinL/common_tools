

docker compose up -d --pull never

sudo HTTP_PROXY= HTTPS_PROXY= docker pull ghcr.io/moltbot/moltbot:main



docker compose up -d moltbot-gateway

docker compose logs -f moltbot-gateway



这个错误不仅是网络问题，还暴露了你的 `docker-compose.yml` 配置在 2026 年的一个“版本陷阱”。

报错显示 Docker 正在尝试从 `docker-cn.com`（一个早已失效或不稳定的镜像站）通过 `7890` 端口（你的本地代理）下载一个名为 `moltbot:local` 的镜像。

**问题核心：**

1. **镜像名称错误**：官方镜像库里没有 `:local` 这个标签，这是给本地开发者自行编译用的。
2. **代理冲突**：你的 Docker 尝试走 `127.0.0.1:7890`，但代理可能没开启，或者 Docker 无法访问宿主机的这个端口，导致连接被重置（Connection Reset）。

---

### 终极修复方案：三步走

#### 第一步：彻底修正 `docker-compose.yml`

不要让 Docker 去猜镜像名。请使用编辑器（如 `nano docker-compose.yml`）直接把镜像地址改死：

```yaml
services:
  app:
    # 删掉原来的 image: ${...}，改为下面这个 2026 官方地址
    image: ghcr.io/moltbot/moltbot:main
    container_name: moltbot
    # 确保 volumes 这里的冒号左边是你的绝对路径，不再用变量
    volumes:
      - /home/你的用户名/moltbot/config:/home/node/.clawdbot
      - /home/你的用户名/moltbot/workspace:/home/node/workspace
    ports:
      - "3000:3000"
    env_file:
      - .env

```

#### 第二步：临时绕过代理拉取

既然 `7890` 端口报错，我们强制让 Docker 尝试直连（或者确保你的代理真的可用）。执行以下命令：

```bash
# 1. 尝试直接拉取（取消环境变量干扰）
sudo HTTP_PROXY= HTTPS_PROXY= docker pull ghcr.io/moltbot/moltbot:main

```

#### 第三步：如果 GitHub (ghcr.io) 还是连不上

在 2026 年，如果你的服务器在国内且没有稳定的海外链路，直接拉取 GitHub 镜像会很痛苦。**方案是改用国内加速源。**

修改 `image` 行为：
`image: registry.cn-hangzhou.aliyuncs.com/moltbot/moltbot:main`

---

### 为什么会一直报 `127.0.0.1:7890` 错误？

这是因为你的 Docker 配置文件（通常在 `/etc/systemd/system/docker.service.d/proxy.conf` 或 `/etc/docker/daemon.json`）里残留了代理设置。

**检查并清理代理设置：**

```bash
# 查看是否有代理配置文件
ls /etc/systemd/system/docker.service.d/

```

如果里面有文件，建议先删除或注释掉，然后重启 Docker：

```bash
sudo systemctl daemon-reload
sudo systemctl restart docker

```

---

### 现在尝试这个“保底”命令：

如果上面的修改都做好了，运行这个：

```bash
docker compose up -d

```

**修改完 `image` 标签并重启后，`docker ps` 能看到容器了吗？** 如果还是报错，请运行 `docker compose config` 检查一下最终生成的 `image` 名字到底是什么。
