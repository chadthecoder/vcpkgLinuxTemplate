chmod u+x build.sh

cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=lib/vcpkg/scripts/buildsystems/vcpkg.cmake 
cd build
make
./HelloWorld

vcpkg install doesnt work?

add .sh file that takes in arguement and builds everything

./lib/vcpkg/vcpkg add port [dep name]