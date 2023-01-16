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
else 
{}	
fi

