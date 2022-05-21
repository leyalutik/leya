::@echo off
chcp 65001

echo Исполняемый файл ADD_COMMAND
pause

cd C:\git\leya
echo Сохранение информации о системе в файл SYSTEM_INFO_current_system.txt

pause
systeminfo > "SYSTEM_INFO_current_system.txt"

echo Создадим исполняемые файлы Paths в папках Китай и leya
pause
more +23 < C:\git\leya\ADD_COMMAND.bat > C:\git\leya\paths.bat
more +23 < C:\git\leya\ADD_COMMAND.bat > %USERPROFILE%\Desktop\Китай\paths.bat

::19 string




@echo off
chcp 65001

echo Переменной pc присвоим полный путь до папки Китай
set pc="%USERPROFILE%\Desktop\Китай"

echo Переменной pl присвоим полный путь до папки leya
set pl="C:\git\leya"
::-----------------------------------------------

exit /B