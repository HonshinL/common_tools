### 安装
sudo apt update
sudo apt install cryptsetup

### 创建
truncate -s 10G move.img
sudo cryptsetup luksFormat move.img
sudo cryptsetup open move.img move
sudo mkfs.ext4 /dev/mapper/move

### 挂载
sudo mount /dev/mapper/move /home/a/.ros/depends/move
sudo chown $USER:$USER /home/a/.ros/depends/move/data

### 卸载
sudo umount /home/a/.ros/depends/move
sudo cryptsetup close move

### 查询大小
du -h --apparent-size move.img
du -h move.img
