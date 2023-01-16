@echo off
chcp 65001 

Path=%Path%;C:\git\leya\WORK;C:\git\leya;C:\git\leya\notion_set;C:\git\mingw\vim82;C:\git\mingw\cmake\bin;C:\git\mingw\bin;C:\git\bin



git config --global user.email "ludapevek@gmail.com" ||  echo Something happens :)) && pause
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list


cd C:\git\ ||  echo Something happens :)) && pause
echo Creating  connection for github. ||  echo Something happens :)) && pause

cd leya
git remote add origin https://github.com/leyalutik/leya.git

echo open your accaunt on github.com 
echo and click button "Generate new token" 
echo(Settings -> Developer setting -> Personal access tokens)
echo Remember token.

git add .
git commit -m "%Date% %Time%" 
git push
echo Fii in : username: leyalutik
echo "           password: <your token>"	


echo "To start new cmd enter commands { cd C:\git\leya & cmd_config.bat}" ||  echo Something happens :)) && pause
echo
echo THE END ||  echo Something happens :)) && pause

echo Close the window.
exit /B