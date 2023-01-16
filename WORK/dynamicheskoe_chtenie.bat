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

echo Journals
echo  Base

start "" %browser_command% "https://www.nkj.ru/archive/1099/43174/" "https://kot.sh/" "https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm" "https://www.nature.com/"




echo Common Knowledge
pause
echo Should  sites with common knowledge be opened?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  start  "" %browser_command% "https://www.nkj.ru/archive/"  "https://kot.sh/"  "https://www.kommersant.ru/nauka"  "https://kvantik.com/archive/" "http://kvant.mccme.ru/" 


if %errorlevel%==2 echo Let's continue && pause


echo Programming
pause
echo Should  sites with digital knowledge be opened?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  start  "" %browser_command% "https://learn.microsoft.com/en-us/archive/msdn-magazine/msdn-magazine-issues" "http://www.delphimagazine.com/" "https://www.accu.org/journals/nonmembers/overload_article_members/" "https://istina.msu.ru/journals/96399/"


if %errorlevel%==2 echo Let's continue && pause


:narrow columns

echo narrow columns
pause
echo Should sites with narrow columns be opened?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  start "" %browser_command% "https://cyberleninka.ru/journal/n/vestnik-tomskogo-gosudarstvennogo-universiteta?i=1115618"  "https://cyberleninka.ru/journal/n/mir-nauki-kultury-obrazovaniya?i=1113941" "https://cyberleninka.ru/article/n/subekty-pravotvorchestva-ponyatie-i-vidy" ""

if %errorlevel%==2 echo Let's continue && pause

echo Interesting sites
pause
echo Should interesing sites but with broad columns be opened?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  start "" %browser_command% "https://cyberleninka.ru/journal/n/mezhdunarodnyy-nauchno-issledovatelskiy-zhurnal?i=1115432" "https://cyberleninka.ru/journal/n/trudy-sankt-peterburgskogo-gosudarstvennogo-instituta-kultury?i=1106795" "https://cyberleninka.ru/journal/n/yazyk-i-kultura?i=1110232" "https://cyberleninka.ru/journal/n/mir-sovremennoy-nauki?i=936666" "https://cyberleninka.ru/journal/n/prostranstvo-i-vremya?i=1029610" "https://cyberleninka.ru/journal/n/novye-tehnologii?i=1109524"

if %errorlevel%==2 echo Let's continue && pause


exit


