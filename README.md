# censorship

A CLI program designed to hide annoying MSVC-compiler messages.

Prevents output lines containing certain words from being printed.

## Usage
- Place banned words in `censor.txt`,`.censor.txt`,`censorship.txt` or `.censorship.txt`
    - Seperate all words by newline
- Run any powershell command (from the location you placed the `.txt` file in) and pipe the output into censorship.exe

### Example
```powershell
cmake --build build | censorship.exe --verbose
```

## Compilation
- Make sure CMake and Visual Studio/Build tools are installed
- Run `build.bat`
- Find the executable at `build\Release\censorship.exe`

or grab a prebuilt release on the right
