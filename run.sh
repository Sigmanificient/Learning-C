echo "Compiling..." | lolcat
mkdir -p build
gcc "$1" -o build/runit
./build/runit
