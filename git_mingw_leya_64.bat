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
if %errorlevel%==2 exit /B

start "" %browser_command% https://github.com/leyalutik/git/archive/refs/heads/master.zip

echo WAIT for downloading directory GIT
pause 

::MOVE GIT to  C:\git
::-----------------------------------------------------------------------
cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME git-master.zip git.zip  ||  echo Something happens :)) && pause

::echo Распакование файлов git.zip в папке Загрузки
echo Unzipping file git.zip in Downloads directory.  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
tar -xf  git.zip || echo In directory Downloads Unzip file git.zip by hand. && pause ||  echo Something happens :)) && pause

echo Rename git_master directory to  git directory  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME git-master git  ||  echo Something happens :)) && pause


echo Coping git directory from Downloads to C:\  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
XCOPY  git C:\git\ /E  ||  echo Something happens :)) && pause

::echo Deleting directory git from directory Downloads ||  echo Something happens :)) && pause
::Удаление папки git из папки Загрузки
::cd "%USERPROFILE%\Downloads" ||  echo Something happens :)) && pause
::RMDIR /S  /Q git ||  echo Something happens :)) && pause
::echo Deleting archive git.zip from directory Downloads  ||  echo Something happens :)) && pause
::Удаление архива git.zip из папки Загрузки  
::del git.zip ||  echo Something happens :)) && pause


::Добавить переменные (nostart add_path_variables.bat)
::----------------------------------------------------------------------------
cd C:\git\leya
set Path >> path_this_computer.txt	||  echo Something happens :)) && pause
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause


cd C:\git

::MINGW LEYA
::--------------------------------------------------------------------------
::MINGW
::------------------------------ 
echo download MINGW?
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
if %errorlevel%==2  echo Close this cmd-window & echo In "C:\git" rename directory "leya" to  "leya1" & echo Move to directory "leya1"  & echo Launch file "git_mingw_leya_32.bat"

exit /B