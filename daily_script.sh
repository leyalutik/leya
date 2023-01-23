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
	echo Enter browser command: f.e. \"firefox\", \"google-chrome\":
	read browser_command
	
}	
fi
echo Current browser: $browser_command
	
##SPEED READING
##-----------------------------------------------------------------------------------------------------------
echo  SPEED READING

## OPEN BOOK "Dynamicheskoe_chtenie.pdf"
##----------------------------------------


echo DOWNLOAD BOOK \"Dynamicheskoe_chtenie.pdf\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command "https://disk.yandex.ru/i/naZjI_AUjiIyTA" &
}
else
{
	echo OPEN BOOK \"Dynamicheskoe_chtenie.pdf\" ? Press 1 for Yes, 2 for No.
	read ANSWER2
	if [[ $ANSWER2 -eq 1 ]] 
	then
	{
		cd ../../Downloads ;	
		$browser_command "Vormsbekher_100_stranits_v_chas.pdf"
	}
	fi
}
fi



##SITES
##-------------------------------------------------------------------------------------------------------------------



Name_site=yandex.ru
URL_site=https://translate.yandex.ru/?
## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi

 Name_site=disk.yandex.ru
 URL_site=https://disk.yandex.ru/client/disk

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi


 Name_site=ankiweb.net
 URL_site=https://ankiweb.net/account/login

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi


 


 Name_site=Algorithms
 URL_site=https://leetcode.com/discuss/general-discussion/665604/Important-and-Useful-links-from-all-over-the-LeetCode https://leetcode.com/explore/learn/

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi  

 Name_site=Tinkoff
 URL_site=https://journal.tinkoff.ru/3-budget/

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi

 Name_site=Stackoverflow.com
 URL_site=https://stackoverflow.com

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi




 Name_site=vc.ru
 URL_site=https://vc.ru/

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi

 Name_site=Anton_Nazarov
 URL_site=https://vk.com/antoshkanazarov

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi




 Name_site=isocpp.org
 URL_site=https://isocpp.org/faq

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi


 Name_site=www.accu.org
 URL_site=https://www.accu.org/

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi

 Name_site=rsdn.org
 URL_site=https://rsdn.org/

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi



 Name_site=journals_nonmembers_overload
 URL_site=https://www.accu.org/journals/nonmembers/overload_issue_members/

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi




 Name_site=cppreference
 URL_site=https://en.cppreference.com/w/

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi




 Name_site=habr.com
 URL_site=https://habr.com

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi

Name_site="Kot Shreodingera"
URL_site="https://kot.sh/"

## OPEN site "Kot Shreodingera"
##----------------------------------------
echo OPEN site \"$Name_site\"  ?
  "Press 1 for Yes, 2 for No."
 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi 

Name_site="Kvantik"
URL_site="https://kvantik.com/archive/"

## OPEN site "Kvantik"
##----------------------------------------
echo OPEN site \"$Name_site\" ?
  "Press 1 for Yes, 2 for No."
 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi 

Name_site="Guide iPhone 6"
URL_site="https://support.apple.com/ru-ru/guide/iphone/iph9374b7411/16.0/ios/16.0"

## OPEN site "Guide iPhone 6"
##----------------------------------------
echo OPEN site \"$Name_site\" ?
  "Press 1 for Yes, 2 for No."
 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi 


Name_site="Science and Life"
URL_site="https://www.nkj.ru/archive/"

## OPEN site "Science and Life"
##----------------------------------------
echo OPEN site $Name_site ?
  "Press 1 for Yes, 2 for No."
 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi 

Name_site="Kommersant nauka"
URL_site=

## OPEN site "Kommersant nauka"
##----------------------------------------
echo OPEN site $Name_site ? "Press 1 for Yes, 2 for No."
 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi 

Name_site="nature"
URL_site="https://www.nature.com/"

## OPEN site "nature"
##----------------------------------------
echo OPEN site $Name_site ?
  "Press 1 for Yes, 2 for No."
 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi 


Name_site="Kvant"
URL_site="http://kvant.mccme.ru/"

## OPEN site "Kvant"
##----------------------------------------
echo OPEN site $Name_site ?
  "Press 1 for Yes, 2 for No."
 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi 

Name_site="Orphografic Dictionary"
URL_site="https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm"


## OPEN site "Orphografic Dictionary"
##----------------------------------------
echo OPEN site $Name_site ?
  "Press 1 for Yes, 2 for No."
 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi 



## https://en.cppreference.com/w/
##https://www.accu.org/journals/nonmembers/cvu_issue_neutered/

##-------------------------------------------------------------------------------------------------
 Name_site="Английский site Anki Web"
 URL_site=https://ankiweb.net/account/login

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi

##--------------------------------
 Name_site="Бюджет  site Tinkoff"
 URL_site=https://journal.tinkoff.ru/

## OPEN site "$Name_site"
##----------------------------------------

 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi
-------------------------------------------

 Name_site="Skilbox"
 URL_site=https://go.skillbox.ru

## OPEN site "$Name_site"
##----------------------------------------

 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi
##-------------------------------------------
 Name_site="Yandex C++"
 URL_site="https://disk.yandex.ru/i/KXfLuCI5WD4rVA https://disk.yandex.ru/i/yHJxdp_iANEsfg https://disk.yandex.ru/i/esQLMMkrjvJ74g"

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site "$Name_site" ?"Press 1 for Yes, 2 for No."

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi

##--------------------------------------------------------------------------------------
 Name_site="Литкод  Проверка своей платформы create_template Любой алгоритм"
 URL_site=https://leetcode.com/

## OPEN site "$Name_site"
##----------------------------------------

 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi
##------------------------------------------------------------------------------------------

##--------------------------------------------------------------------------------------
 Name_site="Хирьянов лекции Алгоритмы"
 URL_site="https://www.youtube.com/c/ТимофейХирьянов/playlists"

## OPEN site "$Name_site"
##----------------------------------------

 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi
##------------------------------------------------------------------------------------------

##--------------------------------------------------------------------------------------
 Name_site=" Столяров Stolyarov"
 URL_site="file:///C:/git/leya/Stolyarov/\"progintro_dmkv1.pdf   file:///C:/git/leya/Stolyarov/progintro_dmkv2.pdf  file:///C:/git/leya/Stolyarov/progintro_dmkv3.pdf  http://www.stolyarov.info"

## OPEN site "$Name_site"
##----------------------------------------

 echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.

read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi
##------------------------------------------------------------------------------------------

Name_site=English_Toeffl
 URL_site=https://disk.yandex.ru/client/disk/1.%D0%A1%D1%82%D0%B0%D0%BD%D0%BE%D0%B2%D0%B8%D0%BC%D1%81%D1%8F%20%D0%BB%D1%83%D1%87%D1%88%D0%B5/English

## OPEN site "$Name_site"
##----------------------------------------
echo OPEN site \"$Name_site\" ? Press 1 for Yes, 2 for No.
read ANSWER
if [[ $ANSWER -eq 1 ]] 
then
{ 
	$browser_command  "$URL_site"  &
}
fi



