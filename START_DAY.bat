chcp 65001

@Echo off

::echo Начало работы!
echo Start working!
::echo Убедитесь, что имя вашего файла START_DAY.bat.
echo Be sure the name of executable file is START_DAY.bat


echo Deleting directory git from directory Downloads
::Удаление папки git из папки Загрузки
pause
cd "%USERPROFILE%\Downloads"
RMDIR /S git
echo Deleting archive git.zip from directory Downloads 
::Удаление архива git.zip из папки Загрузки  
pause
del git.zip





echo Creating bat file ADD_REPOSITORIES 
::Создание исполняемого файла ADD_REPOSITORIES
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
cd "%USERPROFILE%\Desktop"
copy START_DAY.bat C:\git\leya\START_DAY.bat
copy START_DAY.bat "%X%\START_DAY.bat"

echo Задания на вечер, создание файла.
cd C:\git\leya
copy evening_tasks.txt "%USERPROFILE%\Desktop\Китай\evening_tasks.txt"
pause
cd "%XX%"
start  evening_tasks.txt
pause

echo Удаление START_DAY.bat на Рабочем столе
pause
cd ..
del START_DAY.bat
exit /B