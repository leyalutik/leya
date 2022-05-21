chcp 65001

@Echo off

echo Начало работы!
echo Убедитесь, что имя вашего файла START_DAY.bat.

::Если переменной X нет то установить X=Китай
if not defined X ( set X=Китай)  else  ( echo variable X is already defined by %X% )
if not defined XX (set XX="%USERPROFILE%\Desktop\Китай"  ) else ( echo variable XX is already defined by %XX% )


rem Связанное с браузером Firefox

::if not defined pf (set pf="%ProgramFiles%\Mozilla Firefox\firefox.exe" ) else ( echo variable pf is already defined by %pf% )
::pause
::if exist "%ProgramFiles%\Mozilla Firefox\firefox.exe" 

set pf="%ProgramFiles%\Mozilla Firefox\firefox.exe" else 

set pf="%ProgramFiles(x86)%\Mozilla Firefox\firefox.exe" 

 
echo Создание папки Китай в %USERPROFILE%\Desktop
pause
cd  %USERPROFILE%\Desktop
mkdir %X%


echo Переход на сайт www.github.com, где нужно  скачать репозиторий git.zip в папку Загрузки
pause
if exist  "%ProgramFiles%\Mozilla Firefox\firefox.exe"  set resF=true
if exist  "%ProgramFiles(x86)%\Mozilla Firefox\firefox.exe" set resF=true
if %resF% == true start "" firefox.exe  "https://github.com/leyalutik/git.git" 
else start "" "https://github.com/leyalutik/git.git" 
::Open with browser chrome
::else if exist  "%ProgramFiles%\Google\Chrome\Application\chrome.exe"  set resCh=true
::else if exist  "%ProgramFiles(x86)%\Google\Chrome\Application\chrome.exe"  set resCh=true
::if %resCh% == true start "" chrome.exe  "https://github.com/leyalutik/git.git" else start ""  "https://github.com/leyalutik/git.git"

echo Переименование скачанного файла git-master.zip в git.zip
pause
cd %USERPROFILE%\Downloads
RENAME git-master.zip git.zip


echo Распакование файлов git.zip в папке Загрузки
pause
cd %USERPROFILE%\Downloads
tar -xf  git.zip

echo Переименование папки git-master в git
pause
cd %USERPROFILE%\Downloads
RENAME git-master git

echo Копирование папки git в C:\git
pause
cd %USERPROFILE%\Downloads
XCOPY  git C:\git\ /E


echo Добавление переменных среды в переменную Path
echo Сохраним переменную в файле "current_system_path.txt"
cd C:\git
set Path > current_system_path.txt
pause

echo Открываем "Панель управления.Система".
pause

control /name Microsoft.System
echo Перейдите в окно "О системе" -^> "Дополнительные параметры" -^> "Переменные среды"
echo В верхнем окне переменные пользователя выберите Path и нажмите кнопку "Изменить".Потом нажмите 'Enter'.
pause

echo Добавление переменных в переменную Путь.
pause


echo Скопирован в буфер Путь:"C:\git\bin"
echo Нажмите кнопку "Создать" и добавьте эту переменную через ctrl+v. Потом нажмите Enter.
echo C:\git\bin| clip
pause

echo Скопирован в буфер Путь:"C:\git\mingw\bin"
echo Нажмите кнопку "Создать" и добавьте эту переменную через ctrl+v. Потом нажмите Enter.
echo C:\git\mingw\bin| clip
pause

echo Скопирован в буфер Путь:"C:\git\leya\cmake\bin"
echo Нажмите кнопку "Создать" и добавьте эту переменную через ctrl+v. Потом нажмите Enter.
echo C:\git\mingw\cmake\bin| clip
pause

echo Скопирован в буфер Путь:"C:\git\mingw\vim82"
echo Нажмите кнопку "Создать" и добавьте эту переменную через ctrl+v. Потом нажмите Enter.
echo C:\git\mingw\vim82| clip
pause


echo Скопирован в буфер Путь:"C:\git\leya\notion_set"
echo Нажмите кнопку "Создать" и добавьте эту переменную через ctrl+v. Потом нажмите Enter.
echo C:\git\leya\notion_set| clip
pause

echo Скопирован в буфер Путь:"C:\git\leya"
echo Нажмите кнопку "Создать" и добавьте эту переменную через ctrl+v. Потом нажмите Enter.
echo C:\git\leya| clip
pause

echo Скопирован в буфер Путь:"C:\git\leya\WORK"
echo Нажмите кнопку "Создать" и добавьте эту переменную через ctrl+v. Потом нажмите Enter.
echo C:\git\leya\WORK| clip
pause

echo Нажимайте ОК на всех окнах.
pause



echo Удаление папки git из папки Загрузки
pause
cd %USERPROFILE%\Downloads
RMDIR /S git
echo Удаление архива git.zip из папки Загрузки  
pause
del git.zip





echo Создание исполняемого файла ADD_REPOSITORIES
pause
cd C:\git
echo @Echo off > ADD_REPOSITORIES.bat
echo chcp 65001 >> ADD_REPOSITORIES.bat

echo echo Исполняемый файл ADD_REPOSITORIES.bat >> ADD_REPOSITORIES.bat
echo echo Копирования репозитория leya. >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat
echo cd C:\git >> ADD_REPOSITORIES.bat
echo git clone https://github.com/leyalutik/leya.git >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat

echo echo Копирование репозитория mingw. >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat
echo git clone https://github.com/leyalutik/mingw.git >> ADD_REPOSITORIES.bat

echo echo Установка рабочего пространства завершена!)) >> ADD_REPOSITORIES.bat
echo echo Запускаем другие команды. >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat

echo echo Запуск bat-файла ADD_COMMAND в папке leya >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat 

echo start "" leya\ADD_COMMAND.bat >> ADD_REPOSITORIES.bat

echo exit >> ADD_REPOSITORIES.bat

::-----------------------------------------------------------------------------------------

echo Создание исполняемого файла clear_working_space.bat
pause
cd C:\git
echo @Echo off > ADD_REPOSITORIES.bat
echo chcp 65001 >> ADD_REPOSITORIES.bat

echo echo Исполняемый файл ADD_REPOSITORIES.bat >> ADD_REPOSITORIES.bat
echo echo Копирования репозитория leya. >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat
echo cd C:\git >> ADD_REPOSITORIES.bat
echo git clone https://github.com/leyalutik/leya.git >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat

echo echo Копирование репозитория mingw. >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat
echo git clone https://github.com/leyalutik/mingw.git >> ADD_REPOSITORIES.bat

echo echo Установка рабочего пространства завершена!)) >> ADD_REPOSITORIES.bat
echo echo Запускаем другие команды. >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat

echo echo Запуск bat-файла ADD_COMMAND в папке leya >> ADD_REPOSITORIES.bat
echo pause >> ADD_REPOSITORIES.bat 

echo start leya\ADD_COMMAND.bat >> ADD_REPOSITORIES.bat

echo exit >> ADD_REPOSITORIES.bat


echo Откройте файл ADD_REPOSITORIES.bat в новом окне (в буфер памяти добавлена соответствующая команда).
echo После выполнения этого файла нажмите Enter
echo C:\git\ADD_REPOSITORIES.bat| clip
explorer "C:\git"
pause

echo Копирование стартового исполняемого файла в C:\git\leya и папку Китай
pause
cd %USERPROFILE%\Desktop\
copy START_DAY.bat C:\git\leya\START_DAY.bat
copy START_DAY.bat %X%\START_DAY.bat

echo Задания на вечер, создание файла.
cd C:\git\leya
copy evening_tasks.txt "%USERPROFILE%\Desktop\Китай\evening_tasks.txt"
pause
cd %XX%
start  evening_tasks.txt
pause

echo Удаление START_DAY.bat на Рабочем столе
pause
cd ..
del START_DAY.bat
exit /B