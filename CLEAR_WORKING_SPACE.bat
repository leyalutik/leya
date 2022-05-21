@echo off
chcp 65001

echo Перемещение файла CLEAR_WORKING_SPACE на рабочий стол. Нажмите Enter.
more +11 < CLEAR_WORKING_SPACE.bat > "%userprofile%\desktop\clear_working_space.bat"
pause
echo Запуск файла CLEAR_WORKING_SPACE на рабочем столе
cd "%USERPROFILE%\DESKTOP"
start CLEAR_WORKING_SPACE.bat
exit

@echo off
chcp 65001 
echo Очищение рабочего места от всех моих папок.
pause
echo Копирование evening tasks в папку leya
 
cd "%USERPROFILE%\Desktop\Китай"
copy evening_tasks.txt C:\git\leya\\evening_tasks.txt
echo Отправление изменённых файлов leya на github
pause

cd C:\git\leya

git config --global user.email "ludapevek@gmail.com"
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list

git init
git add .
pause
git commit
pause
git remote add origin  https://github.com/leyalutik/leya.git
pause
git push -u -f origin master 

cd "%USERPROFILE%\DESKTOP\Китай"
copy evening_tasks.txt  "%USERPROFILE%\DESKTOP\evening_tasks.txt"
cd  "%USERPROFILE%\DESKTOP\"

echo Удаление папки "%USERPROFILE%\DESKTOP\Китай"
pause
RD "%USERPROFILE%\DESKTOP\Китай" /Q /S

echo Удалить переменные окружения из Пути.
pause
control /name Microsoft.System
echo Перейдите в окно "О системе" -^> "Дополнительные параметры" -^> "Переменные среды"
echo В верхнем окне переменные пользователя выберите Path и нажмите кнопку "Изменить".
echo Потом нажмите 'Enter'.
pause

echo Запустить  браузер  и очистить историю.
echo Потом нажмите 'Enter'.
pause 

echo Запуск списка дел 
pause
start notepad "%USERPROFILE%\Desktop\evening_tasks.txt"

cho Удаление папки git из диска С
pause
cd C:\
RMDIR /S git



echo Удаление  файла запуска.
pause
DEL  "%USERPROFILE%\DESKTOP\CLEAR_WORKING_SPACE.bat"

exit /B
