chcp 65001

@Echo off


echo Start working!
echo
echo

echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=

echo The command of opening current browser : %browser_command% 
pause


echo Woulld you like to open working sites?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  start "" %browser_command% "https://docs.google.com/spreadsheets/d/18OES-NRHAqLozmkm5AArM60mrsGTitjUgE91CcE_eHQ/edit?usp=sharing" && start "" %browser_command% "https://www.labirint.ru/?point=yrp&utm_source=direct&utm_medium=cpc&utm_campaign=brand_search_y&added=no&block=premium&key=%%D0%%BB%%D0%%B0%%D0%%B1%%D0%%B8%%D1%%80%%D0%%B8%%D0%%BD%%D1%%82&retargeting=&ad=9718928396&phrase=22725847171&gbid=4328229213&device=desktop&region=0&region_name=&yclid=16064509312686620671" && start "" %browser_command% "https://www.evernote.com/Login.action?targetUrl=%%2Fclient%%2Fweb%%3Flogin%%3Dtrue%%23%%3Fhm%%3Dtrue%%26"





::Если переменной X нет то установить X=Kitay
if not defined X ( set X=Kitay)  else  ( echo variable X is already defined by %X% )
if not defined XX (set XX=%USERPROFILE%\Desktop\Kitay) else ( echo variable XX is already defined by %XX% )





set Path >> path_this_computer.txt	||  echo Something happens :)) && pause
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause




cd "%XX%" ||  echo Failed to open directory %XX% :)) && pause
start  "" evening_tasks.txt ||  echo Something happens :)) && pause
echo Enter the time for opening file "evening_tasks.txt" in format HH:mm (20:00)
set /P time_set=
pause
schtasks /create /SC ONCE  /TN Evening_task /TR "%USERPROFILE%\Desktop\Kitay\evening_tasks.txt" /ST %time_set%  || echo Something happens && pause
pause

cd C:\git\leya
start "" protocol.txt || echo Something happens :)) && pause
start "" reading_books.txt || echo Something happens :)) && pause


git config --global user.email "ludapevek@gmail.com" ||  echo Something happens :)) && pause
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list


cd C:\git\ ||  echo Something happens :)) && pause
echo Push files to remote github. ||  echo Something happens :)) && pause
start "" git-bash.exe "leya\git_push_files.sh" ||  echo Something happens :)) && pause



echo "To start new cmd enter commands { cd C:\git\leya & cmd_config.bat}" ||  echo Something happens :)) && pause
echo
echo program: MIND_SHARP ||  echo Something happens :)) && pause

pause
cd C:\git\leya\Mind_sharp
start "" mind_sharp.exe



exit /B 
