chcp 65001

@Echo off


::Уже есть скачанный leya C:\git\leya
:: Скачать git mingw leya
:: скачать mingw и leya по выбору

:: CHECK CONDITIONS
::-------------------------------------------------------------------
echo Has directory LEYA already been downloaded?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."
if %errorlevel%==2 echo Launch file start.bat & pause & exit /B

::Typed System Architecture
::------------------------------------------------------------------------

cd C:\git\leya
echo Is Typed System Architecture  x64?
CHOICE /T 9999 /C 12 /D 1 /M "Press 1 for Yes, 2 for No."

if %errorlevel%==1   git_mingw_leya_64.bat
if %errorlevel%==2   git_mingw_leya_32.bat

exit /B
