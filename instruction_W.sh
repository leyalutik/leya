##!/bin/bash
#chmod +x ./myscript

HOME=C:\git\leya\git_home

echo 'Test the SSH key:'
eval "$(ssh-agent -s)"
ssh-add id_ed25519
ssh -T git@github.com
read -p "If connection failed press enter to continue else press Ctrl+c"

echo 'Generate a SSH key pair (private/public):'
echo 'Be sure you are in leya directory'
read -p "Press enter to continue"

cd ..
mkdir .ssh
cd .ssh
ssh-keygen -t ed25519 -C "ludapevek@gmail.com"
eval "$(ssh-agent -s)"
	
ssh-add id_ed25519

echo 'Test the SSH key:'
eval "$(ssh-agent -s)"
ssh-add id_ed25519
ssh -T git@github.com
read -p "Press enter to continue"

echo edit all paths to C:/git/.ssh
echo Edit the property IdentityFile  in /etc/ssh/ssh_config to point to the new id_rsa .
cd ../etc/ssh
gvim ssh_config
read -p "Press enter to continue"
    
echo Edit the property AuthorizedKeysFile in /etc/ssh/sshd_config to point to the desired path.
gvim sshd_config
read -p "Press enter to continue"
  
echo 'Test the SSH key:'
cd ../../.ssh
eval "$(ssh-agent -s)"
ssh-add id_ed25519
ssh -T git@github.com
read -p "Press enter to continue"


echo 'Push file to your remote repository leyalutik/leya.git'
read -p "Press enter to continue"
cd ../leya
git remote set-url origin git@github.com:leyalutik/leya.git
git add .
git commit -m "date"
git push -u -f  origin master

eval "$(ssh-agent –k)"

# if smth was wrong try command
# ssh -Tv git@github.com 

