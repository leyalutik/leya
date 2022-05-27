cd ../.ssh
eval "$(ssh-agent -s)"
ssh-add id_ed25519
ssh -T git@github.com
read -p "Press enter to continue"


echo 'Push file to your remote repository leyalutik/leya.git'
read -p "Press enter to continue"
cd ../leya
git remote set-url origin git@github.com:leyalutik/leya.git
git add .
git commit -m "Date /D hehehe"
git push -u -f  origin master

# if smth was wrong try command
# ssh -Tv git@github.com 

