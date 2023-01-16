@echo off
chcp 65001

::echo Ia?aiauaiea oaeea CLEAR_WORKING_SPACE ia ?aai?ee noie. Ia?ieoa Enter.
echo Transporting file CLEAR_WORKING_SPACE to Desktop.
more +15 < CLEAR_WORKING_SPACE.bat > "%userprofile%\desktop\clear_working_space.bat"
pause
::echo Caione oaeea CLEAR_WORKING_SPACE ia ?aai?ai noiea
echo Launch file CLEAR_WORKING_SPACE on Desktop.

cd "%USERPROFILE%\DESKTOP"
start CLEAR_WORKING_SPACE.bat
exit







@echo off
chcp 65001 

Path=%Path%;C:\git\leya\WORK;C:\git\leya;C:\git\leya\notion_set;C:\git\mingw\vim82;C:\git\mingw\cmake\bin;C:\git\mingw\bin;C:\git\bin

::echo I?euaiea ?aai?aai ianoa io anao iieo iaiie.
echo Clearing working space of my files  ||  echo Something happens :)) && pause
echo  
echo Copping file evening tasks in directory leya  ||  echo Something happens :)) && pause


::Anee ia?aiaiiie X iao oi onoaiiaeou X=Kitay
if not defined X ( set X=Kitay)  else  ( echo variable X is already defined by %X% )
if not defined XX (set XX=%USERPROFILE%\Desktop\Kitay) else ( echo variable XX is already defined by %XX% )
 
cd %XX%  ||  echo Something happens :)) && pause
copy evening_tasks.txt "C:\git\leya\evening_tasks.txt"  ||  echo Something happens :)) && pause


::echo Ioi?aaeaiea eciai?iiuo oaeeia leya ia github
echo Push my files to github.com  ||  echo Something happens :)) && pause
pause
cd C:\git  ||  echo Something happens :)) && pause
start "" git-bash.exe "leya\git_push_files.sh"  ||  echo Something happens :)) && pause
pause

echo Check if curent ssh-agents are existing. Press Enter ... 
tasklist | find "ssh-agent" 
pause

::echo If ssh-agents are not killed launch git-bash.exe again and run command "ps aux | grep ssh" ||::echo Something happens :)) && pause
::echo and run command kill pid1,pid2  (corresponds to the pid ssh-agent process)

::start  "" explorer.exe .  ||  echo Something happens :)) && pause
::pause

::echo Check again if curent ssh-agents are existing 
::tasklist | find "ssh-agent"  || echo all ssh-agets have been killed 

::Oaaeaiea anao ssh-agent.exe
::taskkill /F /IM ssh-agent.exe /T  
::taskkill /IM ssh-agent.exe


echo Deleting temporary git files ||  echo Something happens :)) && pause

cd "%USERPROFILE%" ||  echo Something happens :)) && pause
RMDIR /S /Q .ssh  ||  echo Something happens :)) && pause
start "" explorer.exe . ||  echo Something happens :)) && pause
echo Delete all temporary files (.~) ||  echo Something happens :)) && pause
pause 

echo Launch your browser and clear history ||  echo Something happens :)) && pause
pause 

echo Launch evening tasks  ||  echo Something happens :)) && pause
start notepad "%XX%\evening_tasks.txt" ||  echo Something happens :)) && pause

echo Deleting directory C:\git ||  echo Something happens :)) && pause

cd C:\ ||  echo Something happens :)) && pause
RMDIR /S  git ||  echo Something happens :)) && pause



echo Deleting Clearing_Working_space.bat from desktop ||  echo Something happens :)) && pause
DEL  "%USERPROFILE%\DESKTOP\CLEAR_WORKING_SPACE.bat" ||  echo Something happens :)) && pause

echo Deleting schedule task "Evening_task"
schtasks /delete   /TN Evening_task || echo Something happens && pause

echo When you finish working delete derectory "Kitay"

exit /B


::echo Oaaeeou ia?aiaiiua ie?o?aiey ec Iooe.
::pause
::control /name Microsoft.System
::echo Ia?aeaeoa a ieii "I nenoaia" -^> "Aiiieieoaeuiua ia?aiao?u" -^> "Ia?aiaiiua n?aau"
::echo A aa?oiai ieia ia?aiaiiua iieuciaaoaey auaa?eoa Path e ia?ieoa eiiieo "Eciaieou".
::echo Iioii ia?ieoa 'Enter'.
::pause
