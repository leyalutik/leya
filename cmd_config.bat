@Echo off
chcp 65001


cd C:\git\leya
set Path >>  path_for_this_computer.txt
Path=%Path%;C:\git\leya\WORK;C:\git\leya;C:\git\leya\notion_set;C:\git\mingw\vim82;C:\git\mingw\cmake\bin;C:\git\mingw\bin;C:\git\bin


echo Переменной pd присвоим полный путь до папки Kitay
if not defined pd ( set pd="%USERPROFILE%\Desktop\Kitay")  else  ( echo variable pd is already defined by %pd% )
echo pd = %pd%
echo Переменной pl присвоим полный путь до папки leya
if not defined pl ( set pl="C:\git\leya")  else  ( echo variable pl is already defined by %pl% )
echo pl = %pl%

exit /B







:: Ditectory for saving global git parameters
::if not defined HOME ( set HOME=C:\git\leya\git_home)  else  ( echo variable HOME is already defined by %HOME% )
::echo HOME=%HOME%