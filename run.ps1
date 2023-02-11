.\build.bat
Clear-Host
Get-Content -Path samples/sample01.txt | build\Release\censorship.exe
Get-Content -Path samples/sample01.txt | build\Release\censorship.exe --verbose
