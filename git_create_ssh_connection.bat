@echo off
chcp 65001



::Add path variables
::------------------------------------------------------------------
echo Adding path variables and save current in file system-path.txt ||  echo Something happens :)) && pause 

cd C:\git
set Path >> path_this_computer.txt	||  echo Something happens :)) && pause
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause


::browser
::--------------------------------------------------------------------
echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=

echo The command of opening current browser : %browser_command% 
pause


git config --global user.email "ludapevek@gmail.com" ||  echo Something happens :)) && pause
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list


cd C:\git ||  echo Something happens :)) && pause
echo Creating key for ssh connection. ||  echo Something happens :)) && pause
start "" git-bash.exe "leya\generate_ssh_key_W.sh" ||  echo Something happens :)) && pause
echo  !!! Sign in on site !!!
echo Opening site: "github.com/settings/keys"
start "" %browser_command% "https://github.com/settings/keys"||  echo Something happens :)) && pause

exit /B
