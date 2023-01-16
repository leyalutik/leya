chcp 65001

@Echo off
echo Start working!

echo Be sure the name of executable file is START_DAY.bat

::Anee ia?aiaiiie X iao oi onoaiiaeou X=Kitay
if not defined X ( set X=Kitay)  else  ( echo variable X is already defined by %X% )
if not defined XX (set XX=%USERPROFILE%\Desktop\Kitay) else ( echo variable XX is already defined by %XX% )

echo Creating the Kitay directory on Desktop  ||  echo Something happens :)) && pause
cd  %USERPROFILE%\Desktop ||  echo Something happens :)) && pause
mkdir %X% ||  echo Something happens :)) && pause


::echo Ia?aoia ia naeo www.github.com, aaa io?ii  nea?aou ?aiiceoi?ee git.zip a ::iaieo Caa?ocee
echo Open site https://github.com/leyalutik/git.git  ||  echo Something happens :)) && pause
echo where you should download the repository git.zip in Downloads directory ||  echo Something happens :)) && pause

::start ""  "https://github.com/leyalutik/git.git"  ||  echo Something happens :)) && pause

echo Rename downloaded file git32-master.zip to git.zip  ||  echo Rename by hand git32-master.zip to git.zip && pause

pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) Rename by hand git32-master.zip to git.zip && pause 
RENAME git32-master.zip git.zip  ||  echo Something happens :))  && pause

::echo ?aniaeiaaiea oaeeia git.zip a iaiea Caa?ocee
echo Unzipping file git.zip in Downloads directory.  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
tar -xf  git.zip || echo In directory Downloads Unzip file git.zip by hand. && explorer . && pause  ||  echo Something happens :)) && pause
echo If some files are not unzipped successfully,need to download  them by hand.

echo Rename git32_master directory to  git directory  ||  echo Something happens :)) Rename by hand git32-master to git && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME git32-master git  ||  echo Something happens :)) && pause


echo Coping git directory from Downloads to C:\  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
XCOPY  git C:\git\ /E  ||  echo Something happens :)) && pause

echo Adding path variables and save current in file system-path.txt ||  echo Something happens :)) && pause 

cd C:\git ||  echo Something happens :)) && pause
set Path >> path_this_computer.txt	||  echo Something happens :)) && pause

echo Copping of leya repository ||  echo Something happens :)) && pause

start "" git-cmd.exe "git clone https://github.com/leyalutik/leya.git"

::start "" git-cmd.exe "git clone https://github.com/leyalutik/git32.git"

::echo Launch in new cmd-console and run following commands
::echo cd C:\git\git32
::echo xcopy * C:\git
::echo " "

 

Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause

echo Deleting directory git from directory Downloads ||  echo Something happens :)) && pause
cd "%USERPROFILE%\Downloads" ||  echo Something happens :)) && pause
RMDIR /S  /Q git ||  echo Something happens :)) && pause
echo Deleting archive git.zip from directory Downloads  ||  echo Something happens :)) && pause
del git.zip ||  echo Something happens :)) && pause


echo Saving information about computer system to file SYSTEM_INFO_CURRENT_SYSTEM.txt
pause
cd C:\git\leya ||  echo Something happens :)) && pause
systeminfo > "SYSTEM_INFO_current_system.txt" ||  echo Something happens :)) && pause

echo Copping files ||  echo Something happens :)) && pause 
cd "%USERPROFILE%\Desktop" ||  echo Something happens :)) && pause
copy START_DAY32.bat C:\git\leya\START_DAY32.bat ||  echo Something happens :)) && pause
copy START_DAY32.bat "%XX%\START_DAY32.bat" ||  echo Something happens :)) && pause

 
echo Creating file "evening tasks" ||  echo Something happens :)) && pause
cd C:\git\leya ||  echo Something happens :)) && pause
copy evening_tasks.txt "%XX%\evening_tasks.txt" ||  echo Something happens :)) && pause
copy  protocol.txt  "%XX%\protocol.txt"  ||  echo Something happens :)) && pause
copy reading_books.txt  "%XX%\reading_books.txt"  ||  echo Something happens :)) && pause


cd "%XX%" ||  echo Something happens :)) && pause
start  evening_tasks.txt ||  echo Something happens :)) && pause

cd C:/git
start "" git-cmd.exe "start_day32_peace.bat"
cd "%USERPROFILE%\Desktop" ||  echo Something happens :)) && pause
del start_day32.bat
exit /B