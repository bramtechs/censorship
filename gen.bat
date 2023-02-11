@echo off
DEL /F build
cmake -S . -B build -G "Visual Studio 17 2022" -A Win32 -T v141_xp
