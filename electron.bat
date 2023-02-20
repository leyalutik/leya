
chcp 65001

@Echo off

::browser
::--------------------------------------------------------------------
echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=

echo The command of opening current browser : %browser_command% 
pause

:circle
echo Список действий
echo --------------
echo 1 Скороговорки
echo 2 Онлайн-тренажёр клавиатуры
echo 3 Английские слова
echo 4 Динамическое чтение
echo 5 Тренировка счёта (мозга)
echo 6 Тренировка воображения (Рисовый штурм)
echo 7 Проверка почты
echo 8 Литкод Изучение теории
echo 9 Литкод Решение задач
echo 10 ReplIt
echo ------------
echo  	 
echo 100 Выход
echo  	 
echo Введите число:
set  /P answer=
echo Ваш ответ - %answer%

if %answer%==1 start "" %browser_command% "https://diktory.com/skorogovorki.html" 
if %answer%==2 start "" %browser_command% "https://stamina-online.com/ru/lessons/en"
if %answer%==3 start "" %browser_command% "https://ankiweb.net/about"
if %answer%==4 start "" C:\git\leya\dyn1\dyn.exe || echo Не получилось запустить программу
if %answer%==5 start "" C:\git\leya\Mind_Sharp\mind_sharp.exe || echo Не получилось запустить программу
if %answer%==6 start "" C:\git\leya\Imaginery\imagine.exe || echo Не получилось запустить программу
if %answer%==7 start "" %browser_command% https://mail.ru
if %answer%==8 start "" %browser_command% "https://leetcode.com/explore/learn/"
if %answer%==9 start "" %browser_command% "https://leetcode.com/study-plan/"
if %answer%==10 start "" %browser_command% "https://replit.com" 
if %answer%==100 exit /B 


goto circle



