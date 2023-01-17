chcp 65001

@Echo off

echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=

echo The command of opening current browser : %browser_command%


::SPEED READING
::-----------------------------------------------------------------------------------------------------------
echo  SPEED READING

:: OPEN BOOK "Dynamicheskoe_chtenie.pdf"
::----------------------------------------
cd C:\git\leya\WORK

echo OPEN BOOK "Dynamicheskoe_chtenie.pdf" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% https://disk.yandex.ru/i/naZjI_AUjiIyTA

::SITES
::-------------------------------------------------------------------------------------------------------------------

set Name_site=Tinkoff
set URL_site=https://journal.tinkoff.ru/3-budget/

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




set Name_site=vc.ru
set URL_site=https://vc.ru/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"

set Name_site=Anton_Nazarov
set URL_site=https://vk.com/antoshkanazarov

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


set Name_site=www.accu.org
set URL_site=https://www.accu.org/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"

set Name_site=rsdn.org
set URL_site=https://rsdn.org/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"



set Name_site=journals_nonmembers_overload
set URL_site=https://www.accu.org/journals/nonmembers/overload_issue_members/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"




set Name_site=cppreference
set URL_site=https://en.cppreference.com/w/

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



:: OPEN site "Kot Shreodingera"
::----------------------------------------
echo OPEN site "Kot Shreodingera" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "https://kot.sh/"

:: OPEN site "Kvantik"
::----------------------------------------
echo OPEN site "Kvantik" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "https://kvantik.com/archive/"


:: OPEN site "Guide iPhone 6"
::----------------------------------------
echo OPEN site "Guide iPhone 6" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  start "" %browser_command% "https://support.apple.com/ru-ru/guide/iphone/iph9374b7411/16.0/ios/16.0"

:: OPEN site "Science and Life"
::----------------------------------------
echo OPEN site "Science and Life" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "https://www.nkj.ru/archive/"


:: OPEN site "Kommersant nauka"
::----------------------------------------
echo OPEN site "OPEN site "Kommersant nauka"" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "https://www.kommersant.ru/nauka"

:: OPEN site "nature"
::----------------------------------------
echo OPEN site "nature" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "https://www.nature.com/"


:: OPEN site "Kvant"
::----------------------------------------
echo OPEN site "Kvant" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  start "" %browser_command% "http://kvant.mccme.ru/"

:: OPEN site "Orphografic Dictionary"
::----------------------------------------
echo OPEN site "Orphografic Dictionary" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  start "" %browser_command% "https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm"


:: https://en.cppreference.com/w/
::https://www.accu.org/journals/nonmembers/cvu_issue_neutered/

::-------------------------------------------------------------------------------------------------
set Name_site="Английский site Anki Web"
set URL_site=https://ankiweb.net/account/login

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"

::--------------------------------
set Name_site="Бюджет  site Tinkoff"
set URL_site=https://journal.tinkoff.ru/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"
-------------------------------------------

set Name_site="Skilbox"
set URL_site=https://go.skillbox.ru

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"
::-------------------------------------------
set Name_site="Yandex C++"
set URL_site="https://disk.yandex.ru/i/KXfLuCI5WD4rVA https://disk.yandex.ru/i/yHJxdp_iANEsfg https://disk.yandex.ru/i/esQLMMkrjvJ74g"

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"

::--------------------------------------------------------------------------------------
set Name_site="Литкод  Проверка своей платформы create_template Любой алгоритм"
set URL_site=https://leetcode.com/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"
::------------------------------------------------------------------------------------------

::--------------------------------------------------------------------------------------
set Name_site="Хирьянов лекции Алгоритмы"
set URL_site="https://www.youtube.com/c/ТимофейХирьянов/playlists"

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"
::------------------------------------------------------------------------------------------

::--------------------------------------------------------------------------------------
set Name_site=" Столяров Stolyarov"
set URL_site="file:///C:/git/leya/Stolyarov/\"progintro_dmkv1.pdf   file:///C:/git/leya/Stolyarov/progintro_dmkv2.pdf  file:///C:/git/leya/Stolyarov/progintro_dmkv3.pdf  http://www.stolyarov.info"

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"
::------------------------------------------------------------------------------------------

exit /B