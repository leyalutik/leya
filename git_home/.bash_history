git config --global --list
cd leya
git push
touch bash_config.sh
gvim bash_config.sh 
chmod +x bash_config.sh 
./bash_config.sh
echo $HOME
git push
git add .
git commit -m "date"
git push
set HOME=C:\git\leya\git_home
cd leya
ssh -T git@github.com
