##!/bin/bash
#chmod +x ./myscript

#HOME=C:\git\leya\git_home

echo 'Test the SSH key:'
cd ~
eval "$(ssh-agent -s)"
ssh-add id_ed25519
ssh -T git@github.com
read -p "If connection failed press Ctrl+c and start bat-file "generate_ssh_key_W.sh"

echo 'Push file to your remote repository leyalutik/leya.git'
read -p "Press enter to continue"
cd /c/git/leya
git remote set-url origin git@github.com:leyalutik/leya.git
git add .
git commit -m "date"
git push -u -f  origin master

echo Terminate connection.
read -p "Press enter ..."
eval "$(ssh-agent –k)"



# if smth was wrong try command
# ssh -Tv git@github.com 

