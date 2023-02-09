chcp 65001

@Echo off

::Choose browser        (nostart)       
::------------------------------------------------------------------
cd C:\git\leya 
echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=


::DOWNLOAD directory GIT
::------------------------------------------------------------------------
echo download GIT?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  set leyalutik_indicator=1
if %errorlevel%==2  set leyalutik_indicator=2


if %leyalutik_indicator%==1 start "" %browser_command% https://github.com/leyalutik/git/archive/refs/heads/master.zip
                                                       
if %leyalutik_indicator%==1 cd "%USERPROFILE%\Downloads"  ||  echo Something happens :)) && pause
if %leyalutik_indicator%==1 RENAME git-master.zip git.zip  ||  echo Something happens :)) && pause


if %leyalutik_indicator%==1 echo Unzipping file git.zip in Downloads directory.  ||  echo Something happens :)) && pause

if %leyalutik_indicator%==1 cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
if %leyalutik_indicator%==1 tar -xf  git.zip || echo In directory Downloads Unzip file git.zip by hand. && pause ||  echo Something happens :)) && pause

if %leyalutik_indicator%==1 echo Rename git_master directory to  git directory  ||  echo Something happens :)) && pause
                                              

::MOVE GIT to  C:\git
::-----------------------------------------------------------------------

if %leyalutik_indicator%==1 echo Coping git directory from Downloads to C:\  ||  echo Something happens :)) && pause

if %leyalutik_indicator%==1 cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
if %leyalutik_indicator%==1 XCOPY  git C:\git\ /E  ||  echo Something happens :)) && pause



::MINGW
::------------------------------ 
echo download MINGW?
cd C:\git

CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 git clone https://github.com/leyalutik/mingw.git ||  echo Something happens :)) && pause

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
if %errorlevel%==1 echo WAIT for cloning directory LEYA. and than program copy Protocol.txt from LEAY1 to LEYA.
if %errorlevel%==1 pause
if %errorlevel%==1 cd C:\git\leya1
if %errorlevel%==1 copy protocol.txt ..\leya\protocol.txt
if %errorlevel%==1 pause

if %errorlevel%==2  echo Close this cmd-window & echo In "C:\git" rename directory "leya" to  "leya1" & echo Move to directory "leya1"  & echo Launch file "git_mingw_leya_32.bat"


exit /B
