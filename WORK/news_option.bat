
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


::NEWS
::------------------------------------------------------
echo NEWS

set Name_site=Tinkoff
set URL_site=https://journal.tinkoff.ru/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


set Name_site=Kommersant
set URL_site=https://www.kommersant.ru/?from=logo

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


set Name_site=Stackoverflow.com
set URL_site=https://stackoverflow.com

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


set Name_site=madcats.ru
set URL_site=https://madcats.ru/to-write-good/analiz-istochnikov-informatsii/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"

set Name_site=vc.ru
set URL_site=https://vc.ru/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


set Name_site=rsdn.org/
set URL_site=https://rsdn.org/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"

set Name_site=www.accu.org
set URL_site=https://www.accu.org/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"

set Name_site=isocpp.org
set URL_site=https://isocpp.org/faq

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


set Name_site=habr.com
set URL_site=https://habr.com

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


::"https://sotaproject.com/" "https://novaya.media/themes/novayanauka" 
:: "" "https://weibo.com/signup/signup.php?lang=en-us" 




exit /B