#dont forget to add bin line here
./lib/vcpkg/bootstrap-vcpkg.sh

rm -rf build
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=lib/vcpkg/scripts/buildsystems/vcpkg.cmake 
cd build
make
./HelloWorld

#set VCPKG_ROOT="./lib/vcpkg"
#set PATH=%VCPKG_ROOT%;%PATH%