chcp 65001

@Echo off


::Add path variables
::------------------------------------------------------------------
echo Adding path variables and save current in file system-path.txt ||  echo Something happens :)) && pause 

cd C:\git
set Path >> path_this_computer.txt	||  echo Something happens :)) && pause
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause




exit /B