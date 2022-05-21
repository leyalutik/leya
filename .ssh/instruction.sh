##!/bin/bash
#chmod +x ./myscript


# Open GIT-BASH

echo 'Generate a SSH key pair (private/public):'
 
cd ~/leya/.ssh
ssh-keygen -t ed25519 -C "ludapevek@gmail.com"
eval "$(ssh-agent -s)"
	
ssh-add id_ed25519

# IF nesceseraly Add a (???)new SSH key to your GitHub account

	
echo 'Coping the SSH public key to your clipboard.'
	
clip < id_ed25519.pub
echo 'Add SSH key to Setting of github account'
read -p "Press enter to continue"
	

echo 'Test the SSH key:'
ssh -T git@github.com
read -p "Press enter to continue"

echo 'Push file to your remote repository leyalutik/leya.git'
read -p "Press enter to continue"
cd ..
git remote set-url origin git@github.com:leyalutik/leya.git
git add .
git commit -m "date /T hehehe"
git push -u -f  origin master