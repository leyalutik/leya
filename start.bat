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


::opening necessary set of sites
::------------------------------------------------------------------
echo NECESSARY SET OF SITES
echo Open sites?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% "https://docs.google.com/spreadsheets/d/18OES-NRHAqLozmkm5AArM60mrsGTitjUgE91CcE_eHQ/edit?usp=sharing" "https://www.labirint.ru/?point=yrp&utm_source=direct&utm_medium=cpc&utm_campaign=brand_search_y&added=no&block=premium&key=%D0%BB%D0%B0%D0%B1%D0%B8%D1%80%D0%B8%D0%BD%D1%82&retargeting=&ad=9718928396&phrase=22725847171&gbid=4328229213&device=desktop&region=0&region_name=&yclid=16064509312686620671" "https://www.evernote.com/Login.action?targetUrl=%2Fclient%2Fweb%3Flogin%3Dtrue%23%3Fhm%3Dtrue%26" "https://diktory.com/skorogovorki.html"

:: Directory leya
::----------------------------------------------------------------------
::Download directory leya
echo Download directory leya?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% "https://github.com/leyalutik/leya/archive/refs/heads/master.zip" && pause

::RENAME and MOVE to "C:\git" directory "leya"
::-------------------------------------------------------------------------
cd "%USERPROFILE%\Downloads"

echo RENAME and MOVE to "C:\git" directory "leya" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 set indeficator_leya=1  
if %errorlevel%==2 set indeficator_leya=0  
if %indeficator_leya%==1 echo Rename downloaded file leya-master.zip to leya.zip
if %indeficator_leya%==1 RENAME leya-master.zip leya.zip  ||  echo Something happens :)) && pause

if %indeficator_leya%==1 echo Unzipping file leya.zip in Downloads directory. 
if %indeficator_leya%==1 tar -xf  leya.zip || echo In directory Downloads Unzip file leya.zip by hand. && start "" explorer.exe . :)) && pause
if %indeficator_leya%==1 echo Rename leya_master directory to  leya directory
if %indeficator_leya%==1 RENAME leya-master leya  ||  echo Something happens :)) && pause
if %indeficator_leya%==1 echo Coping leya directory from Downloads to C:\ git
if %indeficator_leya%==1 cd C:\
if %indeficator_leya%==1 mkdir git
if %indeficator_leya%==1 cd git
if %indeficator_leya%==1 mkdir leya
if %indeficator_leya%==1 cd "%USERPROFILE%\Downloads"
if %indeficator_leya%==1 XCOPY  leya C:\git\leya /E  ||  echo Something happens :)) && pause

::OPEN PROTOCOL
::------------------------------------------------------------------------------
cd C:\git\leya

echo open PROTOCOL?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 echo ------------------- >> protocol.txt & echo %Date% >> protocol.txt & type important_words.txt >> protocol.txt & start "" C:\git\leya\protocol.txt || echo Something happens :)) && pause

::OPEN BIBLIA
::------------------------------------------------------------------
echo open BIBLIA ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" %browser_command% "https://www.litres.ru/static/or4/view/or.html?baseurl=/download_book/439825/94146168/&art=439825&user=16415191&uilang=ru&catalit2&track_reading#back_0" || echo Something happens :)) && pause


::OPEN CURRENT PROGRAMS
::------------------------------------------------------
cd C:\git\leya
echo open CURRENT PROGRAMS?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  set indeficator_leya=1
if %errorlevel%==2  set indeficator_leya=2
if %indeficator_leya%==1 echo open program CHTENIE? 
if %indeficator_leya%==1 CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."  
if %indeficator_leya%==1 if %errorlevel%==1 start "" dyn1\dyn.exe || start "" cmd 




::SAVE information about COMPUTER SYSTEM in directory "leya"
::-------------------------------------------------------------------------
cd C:\git\leya

echo SAVE information about COMPUTER SYSTEM in directory "leya" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 systeminfo > "SYSTEM_INFO_current_system.txt" ||  echo Something happens :)) && pause


:: SAVE PATH variables to file "path_this_computer.txt" in directory "C:\git"
::----------------------------------------------------------------------------
cd C:\git 

echo Add PATH variables to file "path_this_computer.txt" in directory "C:\git"?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 set Path >> path_this_computer.txt & Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK  ||  echo Something happens :)) && pause

::GIT and MINGW
::---------------------------------------------------------------
cd C:\git\leya

echo DOWNLOAD GIT and MINGW?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" git_mingw_leya.bat
cd C:\
echo Wait till directories GIT, MINGW and LEYA  have downloaded
pause

:: GIT PUSH  and SSH-connection
::-------------------------------------------------------------------
echo PUSH files or CREATE SSH-connection ?
cd C:\git\leya
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" git_connection.bat
 
cd C:\git\leya

echo open PROTOCOL? 
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 echo ------------------- >> protocol.txt & echo %Date% >> protocol.txt & type important_words.txt >> protocol.txt & start "" C:\git\leya\protocol.txt || echo Something happens :)) && pause


:: OPEN file "evening_tasks"
::---------------------------------------------------------
cd C:\git\leya

echo OPEN file "evening_tasks"?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start  "" evening_tasks.txt ||  echo Something happens :)) && pause

::SET SCHEDULE for file "evening_tasks"
::---------------------------------------------------------
echo SET SCHEDULE for file "evening_tasks" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 echo Enter the time for opening file "evening_tasks.txt" in format HH:mm (20:00) & set /P time_set= 
if %errorlevel%==1 schtasks /create /SC ONCE  /TN Evening_task /TR "C:\git\leya\evening_tasks.txt" /ST %time_set%   

:: OPEN file "Vitrina_inventarisation.txt"
::---------------------------------------------------------
cd C:\git\leya\Labirint

echo OPEN file "Vitrina_inventarisation.txt"?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 echo "Check the Vitrina and input result in file" & echo -------------------- >> "Vitrina_inventarisation.txt" & echo %Date% >> "Vitrina_inventarisation.txt" & echo Name of punkt: >> "Vitrina_inventarisation.txt" & echo Check Result : >> "Vitrina_inventarisation.txt" & start  "" notepad.exe "Vitrina_inventarisation.txt" ||  echo Something happens :)) && pause

::OPEN daily text files 
::--------------------------------------------------------------------------
echo DAILY TEXT FILES


cd C:\git\leya

echo open READING_BOOKS?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" reading_books.txt || echo Something happens :)) && pause

cd C:\git\leya/
 
echo open CURRENT_TIME?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  echo ------- >> current_time.txt & echo ------------------------------------ >> current_time.txt  &  echo %Date% >> current_time.txt & start "" current_time.txt || echo Something happens :)) && pause

echo open INVESTMENT?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1  echo ------- >> investment.txt & echo ------------------------------------ >> investment.txt.txt  &  echo %Date% >> investment.txt.txt & start "" investment.txt.txt || echo Something happens :)) && pause




:: EDIT file "daily_script.bat"
::------------------------------------------------------
cd C:\git\leya

echo EDIT file "daily_script.bat"?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" notepad.exe daily_script.bat
if %errorlevel%==2 pause

::OPEN file "daily_script.bat"
::---------------------------------------------------------
cd C:\git\leya

echo OPEN file "daily_script.bat"?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" daily_script.bat



:: DAILY PROGRAMS
::---------------------------------------------------

::OPEN daily program "Mind_sharp.exe"
::-----------------------------------------------------
cd C:\git\leya\Mind_sharp

echo Open program MIND SHARP?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" mind_sharp.exe  || echo Something happens  && start "" explorer.exe . :)) && pause

::OPEN daily program "work.exe"
::-----------------------------------------------------
cd C:\git\leya\work

echo OPEN daily program "work.exe" ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" work.exe

::DOWNLOAD AND OPEN Telegram
::------------------------------------------------------
cd C:\git\leya

echo DOWNLOAD AND OPEN Telegram ?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" telegram.bat

::OPEN NEWS
::---------------------------------------------------------
echo Open NEWS?
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==1 start "" C:\git\leya\WORK\news_option.bat


exit /B