### 安装
sudo apt update
sudo apt install cryptsetup

### 创建
truncate -s 10G box.img
sudo cryptsetup luksFormat box.img
sudo cryptsetup open box.img box
sudo mkfs.ext4 /dev/mapper/box

### 挂载
sudo mount /dev/mapper/box ~/Buffer/box
sudo chown $USER:$USER ~/Buffer/box

### 卸载
sudo umount ~/Buffer/box
sudo cryptsetup close box

### 查询大小
du -h --apparent-size box.img
du -h box.img
