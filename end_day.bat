@echo off
chcp 65001 

::Add path variables
::------------------------------------------------------------------
echo Adding path variables and save current in file system-path.txt ||  echo Something happens :)) && pause 
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause

::browser
::--------------------------------------------------------------------
echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe
if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=

echo The command of opening current browser : %browser_command% 
pause


echo End this day... Tomorrow I will continue.  ||  echo Something happens :)) && pause
echo Before you starting
echo Copy file "end_day.bat" to directory "Desktop" 

pause
echo Fin in Vipolnennoe in file protocol.txt
pause

:: GIT PUSH  and SSH-connection
::-------------------------------------------------------------------
echo CREATE SSH-connection or PUSH files?
cd C:\git\leya
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" git_connection.bat


echo Check if curent ssh-agents are existing. Press Enter ... 
tasklist | find "ssh-agent"   ||  echo Something happens :)) && pause
pause

:: opening EVENING TASKS
::-------------------------------------------------------------------------
echo Launch evening tasks  ||  echo Something happens :)) && pause
cd C:\git\leya
copy evening_tasks.txt "%userprofile%\Desktop\evening_tasks.txt" ||  echo Something happens :)) && pause

cd "%userprofile%\Desktop
start notepad evening_tasks.txt ||  echo Something happens :)) && pause


:: deleting  SCHEDULE TASK "Evening_task"
::--------------------------------------------------------------
echo Delete schedule task "Evening_task" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 schtasks /delete   /TN Evening_task || echo Something happens && pause

::DELETE TEMPORARY FILES
::------------------------------------------------------------------------------------------------

::DELETE temporary files on DESKTOP
::------------------------------------------------------
cd "%userprofile%\Desktop"

echo Delete all your files on Desktop?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 echo Delete your files on Desktop: & start "" explorer.exe .


::DELETE temporary files on DOWNLOADS
::------------------------------------------------------
cd "%userprofile%\Downloads"

echo Delete all your files on Downloads?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 echo Delete your files on Downloads  & start "" explorer.exe .

::DELETE temporary files on browser
::------------------------------------------------------
echo Delete your history in  browser "%browser_command%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 echo Delete your files on  %browser_command%  & start "" %browser_command% "https://yandex.ru"
pause 

::DELETE temporary GIT FILES
::------------------------------------------------------
cd "%USERPROFILE%"

echo Delete temporary git files?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
::if %errorlevel%==1 RMDIR /S /Q .ssh  ||  echo Something happens :)) && pause 
if %errorlevel%==1 echo Delete all temporary files (.~)  & start "" explorer.exe . 
pause 

:: DELETE "GIT" DIRECTORY in VOLUME  "C:"
::------------------------------------------------------------------------------
cd C:\

echo Delete directory "git" in volume "C:" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  echo Delete directory GIT  & start "" explorer.exe . 
pause 


::-----------------------------------------------------------------------------
echo When you finish in directory "Desktop" delete file "end_day.bat"
pause

exit /B
