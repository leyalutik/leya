chcp 65001

@Echo off

::Choose browser        (nostart)       
::------------------------------------------------------------------

echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=


echo DOWNLOAD GIT32 and LEYA
::DOWNLOAD directory GIT32
::------------------------------------------------------------------------
echo download GIT32?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set leyalutik_indicator=1
if %errorlevel%==2  set leyalutik_indicator=2

if %leyalutik_indicator%==1 start "" %browser_command% https://github.com/git-for-windows/git/releases/download/v2.39.0.windows.2/PortableGit-2.39.0.2-32-bit.7z.exe
::start "" %browser_command%  https://github.com/leyalutik/git32/archive/refs/heads/master.zip


if %leyalutik_indicator%==1 echo WAIT for downloading directory GIT32 (PortableGit)
if %leyalutik_indicator%==1 pause 
if %leyalutik_indicator%==1 echo Extract PortableGit.7z to directory PortableGit
if %leyalutik_indicator%==1 echo And Rename to "git"    
if %leyalutik_indicator%==1 pause                                                   

::MOVE GIT32 to  C:\git
::-----------------------------------------------------------------------


if %leyalutik_indicator%==1 echo Coping git directory from Downloads to C:\  ||  echo Something happens :)) && pause

if %leyalutik_indicator%==1 cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
if %leyalutik_indicator%==1 XCOPY  git C:\git\ /E  ||  echo Something happens :)) && pause


::LEYA 
::----------------------------------
echo download LEYA?
cd C:\git
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==2 exit /B

::EXIST LEYA1 (you should rename it from LEYA)
::----------------------
echo EXIST LEYA1 ? (you should rename it from LEYA)
cd C:\git
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  git clone https://github.com/leyalutik/leya.git ||  echo Something happens :)) & pause
if %errorlevel%==2  echo Close this cmd-window & echo In "C:\git" rename directory "leya" to  "leya1" & echo Move to directory "leya1"  & echo Launch file "git_mingw_leya_32.bat"

exit /B