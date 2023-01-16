##!/bin/bash
#chmod +x ./myscript

#HOME=C:\git\leya\git_home


git config --global user.email "ludapevek@gmail.com" 
git config --global user.name "leyalutik"
git config --global  core.autocrlf true
git config --global --list

echo 'Test the SSH key:'
eval "$(ssh-agent -s)"
#cd ~/.ssh
#ssh-add id_ed25519
ssh -T git@github.com
echo "If connection failed press Ctrl+c and start bat-file \"generate_ssh_key_W.sh\""

echo 'Push file to your remote repository leyalutik/leya.git'
read -p "Press enter to continue"
#cd /c/git/leya
git remote set-url origin git@github.com:leyalutik/leya.git
git add .
git commit -m " %date% %time%"
git push -u origin master
read -p "Press enter to continue"
echo Terminate connection.
eval "$(ssh-agent -k)"

echo "To check all processes ssh-agent have been erased run command ps aux | grep ssh"
echo "Lists of ssh-agents"
echo '{'
ps aux | grep ssh
echo '}'
echo "If process ssh-agent exists need to run kill <pid>"
read -p " "
 #if smth was wrong try command
 #ssh -Tv git@github.com 
