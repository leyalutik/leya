
@echo off
chcp 65001

::GIT CONNECTION
::-------------------------------------------------------------------------------------------


cd C:\git

:: PUSH LEYA files
::------------------------------------------------------------------------------
echo PUSH leya files ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1   git-cmd.exe "" leya\git_push.bat

::Create ssh-connection 
::----------------------------------------------------
echo CREATE ssh-connection and then push files?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  git-cmd.exe "" leya\git_create_ssh_connection.bat

exit /B