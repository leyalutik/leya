chcp 65001

echo Переменной pc присвоим полный путь до папки Kitay
if not defined pd ( set pd="%USERPROFILE%\Desktop\Kitay" & pd = %pd%)  else  ( echo variable pd is already defined by %pd% )
echo Переменной pl присвоим полный путь до папки leya
if not defined pd ( set pl="C:\git\leya" & echo pl = %pl%)  else  ( echo variable pl is already defined by %pl% )





::-----------------------------------------------

exit /B
