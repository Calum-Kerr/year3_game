# year3_game
A Web Game Written In JavaScript With PhaserJS

cmake -G "Unix Makefiles" ..
make
pkill Xvfb || true
rm -f /tmp/.X99-lock
Xvfb :99 &
export DISPLAY=:99
./bin/PRACTICAL_1
ls -l screenshot.png