

```
alias sourceb='source ~/.bashrc'
alias sourced='source ./install/setup.bash'
alias gbashrc='gedit ~/.bashrc'
alias sam2='conda activate sam2'
alias sam='conda activate sam'
alias yolov5='conda activate yolov5'
alias yolov8='conda activate yolov8'
alias yolo11='conda activate yolo11'
alias labelst='conda activate label-studio'
alias clip='conda activate clip'
alias lavis='conda activate lavis'
alias rs='conda activate rs'
alias o3d='conda activate o3d'
alias panda='conda activate panda'
alias gym='conda activate gym'
alias fastsam='conda activate fastsam'
alias cartpole='conda activate cartpole'
alias rvc3='conda activate rvc3'
alias dino='conda activate dino'
alias genesis='conda activate genesis'
alias depth='conda activate depth'
alias huggingface='conda activate huggingface'
alias o3d-ml='conda activate o3d-ml'
alias rob-alg='conda activate rob-alg'
alias coppelia='conda activate coppelia'
alias storm='conda activate storm_kit'
alias rfuniverse='conda activate rfuniverse'
alias pfrl='conda activate pfrl'
alias gym38='conda activate gym38'
alias gym37='conda activate gym37'
alias poppy='conda activate poppy'
alias rrt='conda activate rrt'
alias pdm='conda activate pdm'
alias isaaclab='conda activate isaaclab'
alias bgym='conda activate bullet-gym'
alias fgym='conda activate fr-gym'
alias common='conda activate common'
alias whisper='conda activate whisper'
alias makedoc='conda activate makedoc'
alias viz='conda activate viz'
alias rostest='conda activate ros2'
alias gmr='conda activate gmr'
alias python10='conda activate python10'
alias ros2create='/home/deepspace/Projects/08_ROS2/bin/ros2create.sh'
alias ros2run='ros2 run'
alias ros2pkg='ros2 pkg'
alias exp='conda activate exp'
alias urdf='conda activate urdf'
alias viz='conda activate viz'
alias deeplake='conda activate deeplake'
alias pw='conda activate playwright'
alias control='conda activate control'
alias mbox='sudo cryptsetup open /home/hongxin/Projects/box.img box && sudo mount /dev/mapper/box ~/Buffer/box'
alias ubox='sudo umount ~/Buffer/box && sudo cryptsetup close box'

alias rosdepinstall='rosdep update && rosdep install --from-paths src --ignore-src --rosdistro humble -r -y'
alias buildros='rm -rf build/ install/ log/ && colcon build'
alias rmbuild='rm -rf build/ install/ log/'
alias buildpkg='colcon build --packages-select' #  --symlink-install
alias rostree='ros2 run rqt_tf_tree rqt_tf_tree'
alias rosnode='rqt_graph'
alias rospkgcpp='ros2 pkg create --build-type ament_cmake'
alias rospkgpy='ros2 pkg create --build-type ament_python'
alias rostest='colcon test --packages-select'
alias snpup='CURRENT_UID=$(id -u):$(id -g) docker compose up -d'
alias snpbash='docker exec -it snp bash'
alias snpexec='docker compose exec tesseract bash'
alias snp_ws='cd /home/hongxin/Projects/10_Github/run/snp_ws'
alias unzipgbk='unzip -O GBK'
gitclone() {
    git clone "https://ghfast.top/$1"
}
conda deactivate

echo "1234"|sudo -S chmod 777 /dev/ttyUSB
clear
hostname -I

# huggingface download
export HF_ENDPOINT=https://hf-mirror.com/

export PATH="/usr/bin:$PATH"
export PATH=$PATH:~/.local/bin

export CMAKE_PREFIX_PATH=/home/hongxin/Qt/6.9.3/gcc_64
export LD_LIBRARY_PATH=/home/hongxin/Qt/6.9.3/gcc_64/lib:$LD_LIBRARY_PATH
export CMAKE_PREFIX_PATH=$CMAKE_PREFIX_PATH:/opt/ros/humble

export NVM_DIR="$HOME/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"  # This loads nvm
[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion"  # This loads nvm bash_completion

# export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
# export CYCLONEDDS_URI=file:///home/hongxin/Projects/16_Obsibian/Jitter/test_cpp/src/jitter_analysis/config/cyclonedds_config.xml
# export CYCLONEDDS_URI='<CycloneDDS><Domain><Discovery><Peers><Peer address="192.168.3.91"/></Peers></Discovery></Domain></CycloneDDS>'
# export ROS_DISCOVERY_SERVER=192.168.3.4:11811
export ROS_DOMAIN_ID=10

# OpenClaw 快捷管理
# 进入目录并一键启动后端和前端
alias clawup='cd /home/hongxin/Apps/openclaw && \
OPENCLAW_GATEWAY_TOKEN=123456 \
pm2 start pnpm --name "claw-gw" -- gateway:dev && \
pm2 start pnpm --name "claw-ui" -- ui:dev'
# 查看运行状态和日志
alias claw-status='pm2 list'
alias claw-log='pm2 logs'

# 一键停止并删除进程
alias clawdw='pm2 delete claw-gw claw-ui'

alias gatewatch='pnpm gateway:watch'
alias cdoc='cd /home/hongxin/Apps/openclaw'
```
