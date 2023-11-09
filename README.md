# CProgramming

## Install gcc on windows
- Install VS Code
- Install C/C++ extension for VS Code
- Install MinGW-w64 toolchain
- Run MSYS2 and run command
```
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```
- Add the path to your MinGQ-w64 bin folder to Windows PATH env
- Check your MinGW installation. 
```
gcc --version
```

## How to Compile
Compile command:
```
gcc <filename>.c
```
