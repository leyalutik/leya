#!/bin/bash
 
 
##browser 
##-------------------------------------------------------------------- 
 
 
echo Is the browser Chrome installed? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	browser_command="google-chrome" 
} 
else  
{ 

	echo Enter browser command: f.e. \"firefox\", \"chromium-browser\": 
	read browser_command 
	 
}	 
fi 
echo $browser_command 
	 
#opening necessary set of sites 
#------------------------------------------------------------------ 
echo NECESSARY SET OF SITES 
echo Open sites? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	$browser_command "https://docs.google.com/spreadsheets/d/18OES-NRHAqLozmkm5AArM60mrsGTitjUgE91CcE_eHQ/edit?usp=sharing" & 
	$browser_command  "https://www.labirint.ru/?point=yrp&utm_source=direct&utm_medium=cpc&utm_campaign=brand_search_y&added=no&block=premium&key=%D0%BB%D0%B0%D0%B1%D0%B8%D1%80%D0%B8%D0%BD%D1%82&retargeting=&ad=9718928396&phrase=22725847171&gbid=4328229213&device=desktop&region=0&region_name=&yclid=16064509312686620671"  & 
	$browser_command "https://www.evernote.com/Login.action?targetUrl=%2Fclient%2Fweb%3Flogin%3Dtrue%23%3Fhm%3Dtrue%26" & 
	$browser_command "https://diktory.com/skorogovorki.html" & 
} 
fi 
 
## PULL files from remote GIT 
##--------------------------------- 
echo UPDATE directory \"leya\" 
echo PULL files from remote GIT? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	git pull origin master 
} 
fi 
 
## DOWNLOAD directory "leya" from remote GIT (and remove previous directory "leya") 
##-------------------------------- 
echo PUSH directory \"leya\"  Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	 sudo chmod +x git_push_files.sh;
	 sed -i 's/\r$/ /' git_push_files.sh
	 sudo ./git_push_files.sh;
} 
  	 
fi 
 
## OPEN file "evening_tasks" 
##--------------------------------------------------------- 
cd ~/Desktop/leya 
 
echo OPEN file "evening_tasks"? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	gedit evening_tasks.txt & 
} 
  	 
fi 
 
 
##OPEN daily text files  
##-------------------------------------------------------------------------- 
echo DAILY TEXT FILES 
 
cd ~/Desktop/leya 
echo PROTOCOL 
echo OPEN file \"protocol.txt\"? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	gedit protocol.txt &
} 
  	 
fi 
 
cd ~/Desktop/leya 
 
echo READING BOOKS 
echo OPEN file \"reading_books.txt\"? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	gedit reading_books.txt & 
} 
  	 
fi 
 
 
cd ~/Desktop/leya 
  
echo MY OWN PAGES 
echo OPEN file \"my_own_pages.txt\"? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	gedit my_own_pages.txt & 
} 
  	 
fi 
 
 
 
 
 
## EDIT file "daily_script.bat" 
##------------------------------------------------------ 
cd ~/Desktop/leya 
 
echo EDIT file \"daily_script.sh\"? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	gedit daily_script.sh & 
} 
  	 
fi 
 
 
##OPEN file "daily_script.sh" 
##--------------------------------------------------------- 
cd ~/Desktop/leya 
 
echo OPEN file \"daily_script.sh\"? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	sudo chmod +x daily_script.sh
	 ./daily_script.sh
} 
  	 
fi 
 
 
 
## DAILY PROGRAMS 
##--------------------------------------------------- 
 
##OPEN daily program "Mind_sharp.exe" 
##----------------------------------------------------- 
cd ~/Desktop/leya/Mind_sharp 
 
echo Open program MIND SHARP? 
echo Modernization of program ... 
##CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No." 
##if %errorlevel%==1 start "" mind_sharp.exe 
 
##OPEN daily program "work.exe" 
##----------------------------------------------------- 
cd cd ~/Desktop/leya/WORK 
 
echo OPEN daily program \"work.sh\" ? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	sudo chmod +x work.sh; 
	./work.sh & 
} 
  	 
fi 
 
 
##DOWNLOAD AND OPEN Telegram 
##------------------------------------------------------ 
cd C:\git\leya 
 
echo DOWNLOAD AND OPEN Telegram ? Press 1 for Yes, 2 for No. 
read ANSWER 
if [[ $ANSWER -eq 1 ]]  
then 
{  
	open Telegram & 
} 
  	 
fi 
 
##OPEN NEWS 
##--------------------------------------------------------- 
echo Open NEWS? 
CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No." 
if %errorlevel%==1 start "" C:\git\leya\WORK\news_option.bat 
 
 
 
 
 
 
=======
	browser_command="google-chrome"
}
else 
{
	echo Enter browser command: f.e. \"firefox\", \"chromium-browser\":
	read browser_command
	
}	
fi
echo $browser_command
	
#opening necessary set of sites
#------------------------------------------------------------------
echo NECESSARY SET OF SITES
echo Open sites? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command "https://docs.google.com/spreadsheets/d/18OES-NRHAqLozmkm5AArM60mrsGTitjUgE91CcE_eHQ/edit?usp=sharing" &
	$browser_command  "https://www.labirint.ru/?point=yrp&utm_source=direct&utm_medium=cpc&utm_campaign=brand_search_y&added=no&block=premium&key=%D0%BB%D0%B0%D0%B1%D0%B8%D1%80%D0%B8%D0%BD%D1%82&retargeting=&ad=9718928396&phrase=22725847171&gbid=4328229213&device=desktop&region=0&region_name=&yclid=16064509312686620671"  &
	$browser_command "https://www.evernote.com/Login.action?targetUrl=%2Fclient%2Fweb%3Flogin%3Dtrue%23%3Fhm%3Dtrue%26" &
	$browser_command "https://diktory.com/skorogovorki.html" &
}
else 
{}	
fi

## PULL files from remote GIT
##---------------------------------
echo UPDATE directory \"leya\"
echo PULL files from remote GIT? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	git pull origin master
}
else 
{}	
fi

## DOWNLOAD directory "leya" from remote GIT (and remove previous directory "leya")
##--------------------------------
echo UPDATE directory \"leya\"
echo DOWNLOAD directory \"leya\" from remote GIT (and remove previous directory \"leya\")? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	cd ~/Desktop;
	sudo rm -r leya;
	git clone https://github.com/leyalutik/leya.git;
}
else 
{}	
fi

## OPEN file "evening_tasks"
##---------------------------------------------------------
cd ~/Desktop/leya

echo OPEN file "evening_tasks"? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	gedit evening_tasks.txt &;
}
else 
{}	
fi


##OPEN daily text files 
##--------------------------------------------------------------------------
echo DAILY TEXT FILES

cd ~/Desktop/leya
echo PROTOCOL
echo OPEN file \"protocol.txt\"? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	gedit protocol.txt &;
}
else 
{}	
fi

cd ~/Desktop/leya

echo READING BOOKS
echo OPEN file \"reading_books.txt\"? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	gedit reading_books.txt &;
}
else 
{}	
fi


cd ~/Desktop/leya
 
echo MY OWN PAGES
echo OPEN file \"my_own_pages.txt\"? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	gedit my_own_pages.txt &;
}
else 
{}	
fi





## EDIT file "daily_script.bat"
##------------------------------------------------------
cd ~/Desktop/leya

echo EDIT file \"daily_script.sh\"? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	gedit daily_script.sh &;
}
else 
{}	
fi


##OPEN file "daily_script.sh"
##---------------------------------------------------------
cd C:\git\leya

echo OPEN file \"daily_script.sh\"? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	sudo chmod +x daily_script.sh;
	./daily_script.sh &;
}
else 
{}	
fi



## DAILY PROGRAMS
##---------------------------------------------------

##OPEN daily program "Mind_sharp.exe"
##-----------------------------------------------------
cd ~/Desktop/leya/Mind_sharp

echo Open program MIND SHARP?
echo Modernization of program ...
##CHOICE /T 9999 /C 12 /D 2 /M "Press 1 for Yes, 2 for No."
##if %errorlevel%==1 start "" mind_sharp.exe

##OPEN daily program "work.exe"
##-----------------------------------------------------
cd cd ~/Desktop/leya/WORK

echo OPEN daily program \"work.sh\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	sudo chmod +x work.sh;
	./work.sh &;
}
else 
{}	
fi


##DOWNLOAD AND OPEN Telegram
##------------------------------------------------------


echo DOWNLOAD AND OPEN Telegram ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	open Telegram &;
}
else 
{}	
fi

##OPEN NEWS
##---------------------------------------------------------


echo Decho Open NEWS? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	 ~Desktop/leya/WORK/news_option.bat
}
else 
{}	
fi




