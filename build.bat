@echo off
IF NOT EXIST build (
    call gen.bat
)
cmake --build build --config Release
