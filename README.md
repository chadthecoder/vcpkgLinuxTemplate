chmod u+x build.sh

rm -rf build
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=lib/vcpkg/scripts/buildsystems/vcpkg.cmake 
cd build
make
./HelloWorld

vcpkg install doesnt work?

add .sh file that takes in arguement and builds everything

# ./lib/vcpkg/vcpkg to use vcpkg
Example:
    ./lib/vcpkg/vcpkg add port [dep name]