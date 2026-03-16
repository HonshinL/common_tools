#!/bin/bash
sudo bash install_setup.sh
cd /home/hongxin/Apps/usb_wifi_linux/aic8800_linux_driver/drivers/aic8800
make clean && make && sudo make install
sudo modprobe cfg80211
sudo modprobe aic_load_fw
sudo modprobe aic8800_fdrv
lsmod | grep aic
