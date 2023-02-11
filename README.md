# Censorship
*"Make MSVC shut the f- up again."*

CLI program that prevents piped output containing specified words from being printed.

It was originally designed to hide annoying Windows XP depreciation messages when compiling with MSVC.


## Usage
- Place banned words in `censor.txt`,`.censor.txt`,`censorship.txt` or `.censorship.txt`
    - Seperate all words by newline
- Run any powershell command (from the location you placed the `.txt` file in) and pipe the output into censorship.exe

### Example

censorship.txt
```
warning MSB8051
deprecated
```

Powershell Terminal
```powershell
cmake --build build | censorship.exe --verbose
# or
cmake --build build | censorship.exe
```

## Compilation
- Make sure CMake and Visual Studio/Build tools are installed
- Run `build.bat`
- Find the executable at `build\Release\censorship.exe`

or grab a prebuilt release on the right
