chcp 65001

@Echo off

::echo Начало работы!
echo Start working!
::echo Убедитесь, что имя вашего файла START_DAY.bat.
echo Be sure the name of executable file is START_DAY.bat


::Если переменной X нет то установить X=Kitay
if not defined X ( set X=Kitay)  else  ( echo variable X is already defined by %X% )
if not defined XX (set XX="%USERPROFILE%\Desktop\Kitay"  ) else ( echo variable XX is already defined by %XX% )


 
::echo Создание папки Китай в %USERPROFILE%\Desktop
echo Creating the Kitay directory on Desktop
pause
cd  %USERPROFILE%\Desktop
mkdir %X%


::echo Переход на сайт www.github.com, где нужно  скачать репозиторий git.zip в ::папку Загрузки
echo Opening site https://hithub.com/leyalutik/git.git 
echo where you should download the repository git.zip in Downloads directory
pause
if exist  "%ProgramFiles%\Mozilla Firefox\firefox.exe"  set resF=true
if exist  "%ProgramFiles(x86)%\Mozilla Firefox\firefox.exe" set resF=true
if %resF% == true start "" firefox.exe  "https://github.com/leyalutik/git.git" else start "" "https://github.com/leyalutik/git.git" 
::Open with browser chrome
::else if exist  "%ProgramFiles%\Google\Chrome\Application\chrome.exe"  set resCh=true
::else if exist  "%ProgramFiles(x86)%\Google\Chrome\Application\chrome.exe"  set resCh=true
::if %resCh% == true start "" chrome.exe  "https://github.com/leyalutik/git.git" else start ""  "https://github.com/leyalutik/git.git"

::echo Переименование скачанного файла git-master.zip в git.zip
echo Rename downloaded file git-master.zip to git.zip
pause
cd %USERPROFILE%\Downloads
RENAME git-master.zip git.zip

::echo Распакование файлов git.zip в папке Загрузки
echo Unzipping file git.zip in Downloads directory.
pause
cd %USERPROFILE%\Downloads
tar -xf  git.zip || echo In directory Downloads Unzip file git.zip by hand.
pause

echo Rename git_master directory to  git directory
pause
cd %USERPROFILE%\Downloads
RENAME git-master git


echo Coping git directory from Downloads to C:\
pause
cd %USERPROFILE%\Downloads
XCOPY  git C:\git\ /E


echo Adding path variables and save current in file system-path.txt
pause
cd C:\git
set Path >> path_this_computer.txt
Path=%Path%;C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK
echo Copping of leya repository
pause
git clone https://github.com/leyalutik/leya.git
echo Copping of mingw repository
pause
git clone https://github.com/leyalutik/mingw.git


echo Deleting directory git from directory Downloads
::Удаление папки git из папки Загрузки
pause
cd "%USERPROFILE%\Downloads"
RMDIR /S git
echo Deleting archive git.zip from directory Downloads 
::Удаление архива git.zip из папки Загрузки  
pause
del git.zip

cd C:\git\leya

git config --global user.email "ludapevek@gmail.com"
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list


echo Creating key for ssh connection.
pause
cd ..
start "" git-bash.exe "leya\generate_ssh_key_W.sh"



echo Сохранение информации о системе в файл SYSTEM_INFO_current_system.txt
pause
cd C:\git\leya
systeminfo > "SYSTEM_INFO_current_system.txt"



echo Copping files 
pause
cd "%USERPROFILE%\Desktop"
copy START_DAY.bat C:\git\leya\START_DAY.bat
copy START_DAY.bat "%X%\START_DAY.bat"

echo Задания на вечер, создание файла.
cd C:\git\leya
copy evening_tasks.txt "%USERPROFILE%\Desktop\Kitay\evening_tasks.txt"
pause
cd "%XX%"
start  evening_tasks.txt
pause

echo Удаление START_DAY.bat на Рабочем столе
pause
cd ..
del START_DAY.bat
exit /B





















rem Связанное с браузером Firefox

::if not defined pf (set pf="%ProgramFiles%\Mozilla Firefox\firefox.exe" ) else ( echo variable pf is already defined by %pf% )
::pause
::if exist "%ProgramFiles%\Mozilla Firefox\firefox.exe" 

::set pf="%ProgramFiles%\Mozilla Firefox\firefox.exe" else 

::set pf="%ProgramFiles(x86)%\Mozilla Firefox\firefox.exe" 


::echo Открываем "Панель управления.Система".
echo Opening Control System. Add system path variable.
pause

control /name Microsoft.System
echo C:\git\bin;C:\git\mingw\bin;C:\git\mingw\cmake\bin;C:\git\mingw\vim82;C:\git\leya\notion_set;C:\git\leya;C:\git\leya\WORK;| clip
::echo Перейдите в окно "О системе" -^> "Дополнительные параметры" -^> "Переменные среды"
::echo В верхнем окне переменные пользователя выберите ::Path и нажмите кнопку "Изменить".Потом нажмите 'Enter'.
::echo Добавление переменных в переменную Путь.

::echo Скопирован в буфер Путь:"C:\git\bin"
::echo Нажмите кнопку "Создать" и добавьте эту переменную ::через ctrl+v. Потом нажмите Enter.
::echo Copy in buffer path variable : "C:\git\bin"
::echo C:\git\bin| clip
::pause


::echo Нажимайте ОК на всех окнах.
::pause



::echo Creating bat file ADD_REPOSITORIES 
::Создание исполняемого файла ADD_REPOSITORIES
::pause
::cd C:\git
::echo @Echo off > ADD_REPOSITORIES.bat
::echo chcp 65001 >> ADD_REPOSITORIES.bat

::echo echo Исполняемый файл ADD_REPOSITORIES.bat >> ADD_REPOSITORIES.bat
::echo echo Копирования репозитория leya. >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat
::echo cd C:\git >> ADD_REPOSITORIES.bat
::echo git clone https://github.com/leyalutik/leya.git >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat

::echo echo Копирование репозитория mingw. >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat
::echo git clone https://github.com/leyalutik/mingw.git >> ADD_REPOSITORIES.bat

::echo echo Установка рабочего пространства завершена!)) >> ADD_REPOSITORIES.bat
::echo echo Запускаем другие команды. >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat

::echo echo Запуск bat-файла ADD_COMMAND в папке leya >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat 

::echo start "" leya\ADD_COMMAND.bat >> ADD_REPOSITORIES.bat

::echo exit >> ADD_REPOSITORIES.bat

::-----------------------------------------------------------------------------------------

::echo Создание исполняемого файла clear_working_space.bat
::pause
::cd C:\git
::echo @Echo off > ADD_REPOSITORIES.bat
::echo chcp 65001 >> ADD_REPOSITORIES.bat

::echo echo Исполняемый файл ADD_REPOSITORIES.bat >> ADD_REPOSITORIES.bat
::echo echo Копирования репозитория leya. >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat
::echo cd C:\git >> ADD_REPOSITORIES.bat
::echo git clone https://github.com/leyalutik/leya.git >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat

::echo echo Копирование репозитория mingw. >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat
::echo git clone https://github.com/leyalutik/mingw.git >> ADD_REPOSITORIES.bat

::echo echo Установка рабочего пространства завершена!)) >> ADD_REPOSITORIES.bat
::echo echo Запускаем другие команды. >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat

::echo echo Запуск bat-файла ADD_COMMAND в папке leya >> ADD_REPOSITORIES.bat
::echo pause >> ADD_REPOSITORIES.bat 

::echo start leya\ADD_COMMAND.bat >> ADD_REPOSITORIES.bat

::echo exit >> ADD_REPOSITORIES.bat


::echo Откройте файл ADD_REPOSITORIES.bat в новом окне (в буфер памяти добавлена соответствующая команда).
::echo После выполнения этого файла нажмите Enter
::echo C:\git\ADD_REPOSITORIES.bat| clip
::explorer "C:\git"
::pause
