@Echo off
chcp 65001
if not defined HOME ( set HOME=C:\git\leya\git_home)  else  ( echo variable HOME is already defined by %HOME% )
echo HOME=%HOME%

Path=%Path%;C:\git\leya\WORK;C:\git\leya;C:\git\leya\notion_set;C:\git\mingw\vim82;C:\git\mingw\cmake\bin;C:\git\mingw\bin;C:\git\bin

exit /B