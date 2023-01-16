chcp 65001

@Echo off

::echo Íà÷àëî ðàáîòû!
echo Start working!
::echo Óáåäèòåñü, ÷òî èìÿ âàøåãî ôàéëà START_DAY.bat.
echo Be sure the name of executable file is START_DAY.bat


::Åñëè ïåðåìåííîé X íåò òî óñòàíîâèòü X=Kitay
if not defined X ( set X=Kitay)  else  ( echo variable X is already defined by %X% )
if not defined XX (set XX=%USERPROFILE%\Desktop\Kitay) else ( echo variable XX is already defined by %XX% )


 
::echo Ñîçäàíèå ïàïêè Êèòàé â %USERPROFILE%\Desktop
echo Creating the Kitay directory on Desktop  ||  echo Something happens :)) && pause
cd  %USERPROFILE%\Desktop ||  echo Something happens :)) && pause
mkdir %X% ||  echo Something happens :)) && pause


::echo Ïåðåõîä íà ñàéò www.github.com, ãäå íóæíî  ñêà÷àòü ðåïîçèòîðèé git.zip â ::ïàïêó Çàãðóçêè
echo Open site https://github.com/leyalutik/git.git  ||  echo Something happens :)) && pause
echo where you should download the repository git.zip in Downloads directory ||  echo Something happens :)) && pause

::start ""  "https://github.com/leyalutik/git.git"  ||  echo Something happens :)) && pause

::echo Ïåðåèìåíîâàíèå ñêà÷àííîãî ôàéëà git-master.zip â git.zip
echo Rename downloaded file git-master.zip to git.zip  ||  echo Something happens :)) && pause

pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME git-master.zip git.zip  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME leya-master.zip leya.zip  ||  echo Something happens :)) && pause


cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME mingw-main.zip mingw.zip  ||  echo Something happens :)) && pause

::echo Ðàñïàêîâàíèå ôàéëîâ git.zip â ïàïêå Çàãðóçêè
echo Unzipping file git.zip leya.zip mingw.zip in Downloads directory.  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
tar -xf  git.zip || echo In directory Downloads Unzip file git.zip by hand.  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
tar -xf  leya.zip || echo In directory Downloads Unzip file git.zip by hand.  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
tar -xf  mingw.zip || echo In directory Downloads Unzip file git.zip by hand.  ||  echo Something happens :)) && pause

echo Rename git_master leya_master mingw_main directory to  git leya mingw directories  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME git-master git  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME leya-master leya  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
RENAME mingw-main mingw  ||  echo Something happens :)) && pause

echo Coping git leya mingw directories from Downloads to C:\  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
XCOPY  git C:\git\ /E  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
XCOPY  leya C:\git\leya\ /E  ||  echo Something happens :)) && pause

cd %USERPROFILE%\Downloads  ||  echo Something happens :)) && pause
XCOPY  mingw C:\git\mingw\ /E  ||  echo Something happens :)) && pause

echo Adding path variables and save current in file system-path.txt ||  echo Something happens :)) && pause 

cd C:\git ||  echo Something happens :)) && pause
set Path >> path_this_computer.txt	||  echo Something happens :)) && pause
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause

echo Copping of leya repository ||  echo Something happens :)) && pause


echo Deleting directory git leya mingw from directory Downloads ||  echo Something happens :)) && pause
::Óäàëåíèå ïàïêè git èç ïàïêè Çàãðóçêè
cd "%USERPROFILE%\Downloads" ||  echo Something happens :)) && pause
RMDIR /S  /Q git ||  echo Something happens :)) && pause
echo Deleting archive git.zip from directory Downloads  ||  echo Something happens :)) && pause
::Óäàëåíèå àðõèâà git.zip èç ïàïêè Çàãðóçêè  
del git.zip ||  echo Something happens :)) && pause

::Óäàëåíèå ïàïêè leya èç ïàïêè Çàãðóçêè
cd "%USERPROFILE%\Downloads" ||  echo Something happens :)) && pause
RMDIR /S  /Q leya ||  echo Something happens :)) && pause
echo Deleting archive leya.zip from directory Downloads  ||  echo Something happens :)) && pause
::Óäàëåíèå àðõèâà git.zip èç ïàïêè Çàãðóçêè  
del leya.zip ||  echo Something happens :)) && pause

::Óäàëåíèå ïàïêè mingw èç ïàïêè Çàãðóçêè
cd "%USERPROFILE%\Downloads" ||  echo Something happens :)) && pause
RMDIR /S  /Q mingw ||  echo Something happens :)) && pause
echo Deleting archive mingw.zip from directory Downloads  ||  echo Something happens :)) && pause
::Óäàëåíèå àðõèâà mingw.zip èç ïàïêè Çàãðóçêè  
del mingw.zip ||  echo Something happens :)) && pause

cd C:\git\leya ||  echo Something happens :)) && pause

git config --global user.email "ludapevek@gmail.com" ||  echo Something happens :)) && pause
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list


cd C:\git\ ||  echo Something happens :)) && pause
echo Creating key for ssh connection. ||  echo Something happens :)) && pause
start "" git-bash.exe "leya\generate_ssh_key_W.sh" ||  echo Something happens :)) && pause


::echo Ñîõðàíåíèå èíôîðìàöèè î ñèñòåìå â ôàéë SYSTEM_INFO_current_system.txt
echo Saving information about computer system to file SYSTEM_INFO_CURRENT_SYSTEM.txt
pause
cd C:\git\leya ||  echo Something happens :)) && pause
systeminfo > "SYSTEM_INFO_current_system.txt" ||  echo Something happens :)) && pause

echo Copping files ||  echo Something happens :)) && pause 
cd "%USERPROFILE%\Desktop" ||  echo Something happens :)) && pause
copy START_DAY.bat C:\git\leya\START_DAY_no_ssh_donwloads.bat ||  echo Something happens :)) && pause
copy START_DAY.bat "%XX%\START_DAY.bat" ||  echo Something happens :)) && pause
 
::echo Çàäàíèÿ íà âå÷åð, ñîçäàíèå ôàéëà.
echo Creating file "evening tasks" ||  echo Something happens :)) && pause
cd C:\git\leya ||  echo Something happens :)) && pause
copy evening_tasks.txt "%XX%\evening_tasks.txt" ||  echo Something happens :)) && pause
copy  protocol.txt  "%XX%\protocol.txt"  ||  echo Something happens :)) && pause

cd "%XX%" ||  echo Something happens :)) && pause
start  evening_tasks.txt ||  echo Something happens :)) && pause


::echo Óäàëåíèå START_DAY.bat íà Ðàáî÷åì ñòîëå
echo Deleting START_DAY.bat on Desktop ||  echo Something happens :)) && pause
cd .. ||  echo Something happens :)) && pause
del START_DAY.bat ||  echo Something happens :)) && pause
echo " " ||  echo Something happens :)) && pause
echo "To start new cmd enter commands { cd C:\git\leya & cmd_config.bat}" ||  echo Something happens :)) && pause
echo THE END ||  echo Something happens :)) && pause
pause
exit /B