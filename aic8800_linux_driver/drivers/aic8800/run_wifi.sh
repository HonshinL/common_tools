#!/bin/bash
sudo bash install_setup.sh
cd drivers/aic8800
sudo make
sudo make install
modprobe cfg80211
modprobe aic_load_fw
modprobe aic8800_fdrv
lsmod | grep aic
