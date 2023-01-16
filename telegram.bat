
chcp 65001

@Echo off

echo Is the browser Chrome installed?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1  set browser_command=chrome.exe

if %errorlevel%==2 echo Enter the execute file of browser (browser.exe, firefox.exe): & set /P browser_command=

echo The command of opening current browser : %browser_command% 
pause
:Download telegram portable version
start "" chrome "https://telegram.org/dl/desktop/win64_portable" || echo Some mistake's happend. && pause
echo Press Enter when file's downloaded.
pause

echo Unzipping file
cd "%USERPROFILE%\Downloads"  ||  echo Something happens :)) && pause
echo Unzip file "tportable-x64.4.3.*.zip"
start explorer.exe  .
::tar -xf  "tportable-x64.4.3.*.zip" || echo In directory Downloads Unzip file git.zip by hand. && pause ||  echo Something happens :)) && pause


::cd "%userprofile%\Downloads\Telegram"
::start "" Telegram.exe
::pause
exit