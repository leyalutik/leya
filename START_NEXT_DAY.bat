chcp 65001

@Echo off

echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=

echo
echo Should default sites be opened?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  echo The command of opening current browser : %browser_command%  & start "" %browser_command% "https://docs.google.com/spreadsheets/d/18OES-NRHAqLozmkm5AArM60mrsGTitjUgE91CcE_eHQ/edit?usp=sharing" & start "" %browser_command% "https://www.labirint.ru/?point=yrp&utm_source=direct&utm_medium=cpc&utm_campaign=brand_search_y&added=no&block=premium&key=%D0%BB%D0%B0%D0%B1%D0%B8%D1%80%D0%B8%D0%BD%D1%82&retargeting=&ad=9718928396&phrase=22725847171&gbid=4328229213&device=desktop&region=0&region_name=&yclid=16064509312686620671" & start "" %browser_command% "https://www.evernote.com/Login.action?targetUrl=%2Fclient%2Fweb%3Flogin%3Dtrue%23%3Fhm%3Dtrue%26" & start "" %browser_command% "https://diktory.com/skorogovorki.html" & start "" %browser_command%  "https://desktop.telegram.org/?setln=ru"

::echo Начало работы!
echo Start working!

::Если переменной X нет то установить X=Kitay
if not defined X ( set X=Kitay)  else  ( echo variable X is already defined by %X% )
if not defined XX (set XX=%USERPROFILE%\Desktop\Kitay) else ( echo variable XX is already defined by %XX% )


::echo Создание папки Китай в %USERPROFILE%\Desktop
echo Creating the Kitay directory on Desktop  ||  echo Something happens :)) && pause
cd  "%USERPROFILE%\Desktop" ||  echo Something happens :)) && pause
mkdir %X% ||  echo Something happens :)) && pause

echo Adding path variables and save current in file system-path.txt ||  echo Something happens :)) && pause 

cd C:\git ||  echo Something happens :)) && pause
set Path >> path_this_computer.txt	||  echo Something happens :)) && pause
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause



::echo Сохранение информации о системе в файл SYSTEM_INFO_current_system.txt
echo Saving information about computer system to file SYSTEM_INFO_CURRENT_SYSTEM.txt
pause
cd C:\git\leya ||  echo Something happens :)) && pause
systeminfo > "SYSTEM_INFO_current_system.txt" ||  echo Something happens :)) && pause


::echo Задания на вечер, создание файла.
echo Creating file "evening tasks" ||  echo Something happens :)) && pause
cd C:\git\leya ||  echo Something happens :)) && pause
copy evening_tasks.txt "%XX%\evening_tasks.txt" ||  echo Something happens :)) && pause

cd C:\git\leya
echo ------------------- >> protocol.txt
echo %Date% >> protocol.txt
echo ------------------- >> protocol.txt
type important_words.txt  >> protocol.txt

start "" protocol.txt || echo Something happens :)) && pause
start "" reading_books.txt || echo Something happens :)) && pause

cd "%XX%" ||  echo Something happens :)) && pause
start  "" evening_tasks.txt ||  echo Something happens :)) && pause
echo Enter the time for opening file "evening_tasks.txt" in format HH:mm (20:00)
set /P time_set=
pause
schtasks /create /SC ONCE  /TN Evening_task /TR "%USERPROFILE%\Desktop\Kitay\evening_tasks.txt" /ST %time_set%   || echo Something happens && pause
pause






git config --global user.email "ludapevek@gmail.com" ||  echo Something happens :)) && pause
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list


cd C:\git\leya ||  echo Something happens :)) && pause
start "" git_push.bat ||  echo Something happens :)) && pause
pause


echo "To start new cmd enter commands { cd C:\git\leya & cmd_config.bat}" ||  echo Something happens :)) && pause

cd C:\git\leya
start "" telegram.bat

echo
echo THE END ||  echo Something happens :)) && pause

cd C:\git\leya\Mind_sharp
start "" mind_sharp.exe

cd C:\git\leya\work
start "" work.exe

exit /B

::echo start news
::pause

::start "" %browser_command% "https://www.kommersant.ru/?from=logo" "https://www.bfm.ru/rubric/IT_telecom_internet"  "https://www.fontanka.ru/"  "https://novayagazeta.ru/news" "https://www.oregonlive.com/opinion/" 
::start "" %browser_command%  "https://www.washingtonpost.com/" "https://cpj.org/news/" "https://www.theguardian.com/international" "https://novaya.media/" "https://sotaproject.com/" "https://novaya.media/themes/novayanauka" "https://novaya.media/themes/kozhavremeni"
::start "" %browser_command%  "https://habr.com/en/search/?q=C%2B%2B&target_type=posts&order=rating" "https://stackoverflow.com/questions/tagged/c%2b%2b?tab=Votes" "https://weibo.com/signup/signup.php?lang=en-us"pause

::echo Удаление START_DAY.bat на Рабочем столе
::echo Deleting START_DAY.bat on Desktop ||  echo Something happens :)) && pause
