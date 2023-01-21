chcp 65001

@Echo off

echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=

echo The command of opening current browser : %browser_command%




::SITES
::-------------------------------------------------------------------------------------------------------------------



set Name_site="Yandex translate"
set URL_site="https://translate.yandex.ru/?source_lang=en&target_lang=ru&text=vertices"
:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


set Name_site=disk.yandex.ru
set URL_site=https://disk.yandex.ru/client/disk

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


set Name_site=ankiweb.net
set URL_site=https://ankiweb.net/account/login

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"


set Name_site=English_Toeffl
set URL_site=https://disk.yandex.ru/client/disk/1.%%D0%%A1%%D1%%82%%D0%%B0%%D0%%BD%%D0%%BE%%D0%%B2%%D0%%B8%%D0%%BC%%D1%%81%%D1%%8F%%20%%D0%%BB%%D1%%83%%D1%%87%%D1%%88%%D0%%B5/English

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"



set Name_site=Leetcode Algorithms and general plan of stydies
set URL_site=https://leetcode.com/discuss/general-discussion/665604/Important-and-Useful-links-from-all-over-the-LeetCode

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"  "https://leetcode.com/discuss/general-discussion/665604/Important-and-Useful-links-from-all-over-the-LeetCode"


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



set Name_site=modernescpp.com
set URL_site=https://www.modernescpp.com/index.php/argument-dependent-lookup-and-hidden-friends


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
set URL_site=https://isocpp.org/

:: OPEN site "%Name_site%"
::----------------------------------------
echo OPEN site "%Name_site%" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command%  "%URL_site%"

set Name_site="Wu YongWei's (programmer modern C++) page"
set URL_site=http://wyw.dcweb.cn/index.htm

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

::BOOKS
::-----------------------------------------------------------------------------------------------------------


set book_leya="Dynamicheskoe_chtenie.pdf"
set name_file="Vormsbekher_100_stranits_v_chas.pdf"
set name_site="https://disk.yandex.ru/i/naZjI_AUjiIyTA"

echo  SPEED READING
::-------------------------------------------------
:: OPEN BOOK %book_leya% ?
::----------------------------------------
echo DOWNLOAD BOOK  %book_leya% ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% %name_site%

echo OPEN BOOK  %book_leya% (in Downloads directory)?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% "file:///%userprofile%/Downloads/%name_file%"


set book_leya="Stroustrupp. C++"
set name_file=" "
set name_site="https://disk.yandex.ru/i/xg_bOhq1iL8Upw https://disk.yandex.ru/i/FSkmO5-JMknjTQ"

echo  C++

echo Stroustrupp
::-------------------------------------------------
::-------------------------------------------------
:: OPEN BOOK %book_leya% ?
::----------------------------------------
echo DOWNLOAD BOOK  %book_leya% ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% %name_site%

echo OPEN BOOK  %book_leya% (in Downloads directory)?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
:loop
if %errorlevel%==1 cd "%userprofile%\Downloads"
if %errorlevel%==1 dir /OD
 echo Copy the name of downloaded file:
if %errorlevel%==1 pause
set name_file /P 
if %errorlevel%==1  start "" %browser_command% "file:///%userprofile%/Downloads/%name_file%"

echo OPEN BOOK  %book_leya% (in Downloads directory)?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 goto loop


set book_leya="Yandex Cplusplus"
set name_file="Vormsbekher_100_stranits_v_chas.pdf"
set name_site="https://disk.yandex.ru/i/KXfLuCI5WD4rVA https://disk.yandex.ru/i/yHJxdp_iANEsfg https://disk.yandex.ru/i/esQLMMkrjvJ74g"

echo  "Yandex Cplusplus"
::-------------------------------------------------
:: OPEN BOOK %book_leya% ?
::----------------------------------------
echo DOWNLOAD BOOK  %book_leya% ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% %name_site%

echo OPEN BOOK  %book_leya% (in Downloads directory)?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
:loop
if %errorlevel%==1 cd "%userprofile%\Downloads"
if %errorlevel%==1 dir /OD
 echo Copy the name of downloaded file:
if %errorlevel%==1 pause
set name_file /P 
if %errorlevel%==1  start "" %browser_command% "file:///%userprofile%/Downloads/%name_file%"

echo OPEN BOOK  %book_leya% (in Downloads directory)?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 goto loop

set book_leya="Stolyarov. C++"
set name_file=" "
set name_site="https://disk.yandex.ru/i/7c6UFzft3NtGHA https://disk.yandex.ru/i/zPRIhapDxVJlUA https://disk.yandex.ru/i/88bLPoqj_QYN5g"
echo  "Stolyarov book"
::-------------------------------------------------
:: OPEN BOOK %book_leya% ?
::----------------------------------------
echo DOWNLOAD BOOK  %book_leya% ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% %name_site%

echo OPEN BOOK  %book_leya% (in Downloads directory)?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
:loop
if %errorlevel%==1 cd "%userprofile%\Downloads"
if %errorlevel%==1 dir /OD
echo Copy the name of downloaded file:
if %errorlevel%==1 pause
set name_file /P 
if %errorlevel%==1  start "" %browser_command% "file:///%userprofile%/Downloads/%name_file%"

echo OPEN BOOK  %book_leya% (in Downloads directory)?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 goto loop


::SYSTEM DESIGN
::----------------------------------------------------------------------------------------

echo SYSTEM DESIGN


set book_leya="E. Gamma et al.| Object Oriented Design Patterns (2020) [PDF]"
set name_file="Gamma. Patterns."
set name_site="https://disk.yandex.ru/i/BTCDadGkbSWQqg"

echo  
::-------------------------------------------------
:: OPEN BOOK %book_leya% ?
::----------------------------------------
echo DOWNLOAD BOOK  %book_leya% ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% %name_site%

echo OPEN BOOK  %book_leya% (in Downloads directory)?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
:loop
if %errorlevel%==1 cd "%userprofile%\Downloads"
if %errorlevel%==1 dir /OD
echo Copy the name of downloaded file:
if %errorlevel%==1 pause
set name_file /P 
if %errorlevel%==1  start "" %browser_command% "file:///%userprofile%/Downloads/%name_file%"







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
