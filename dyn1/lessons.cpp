#include <vector>
#include <map>
#include <set>
#include<exception>
#include <cassert>
#include<cstdlib>
#include<iostream>
#include<string>
#include <sstream>
#include <fstream>
#include <chrono>

#include "lessons/lesson0.h"
#include "lessons/lesson1.h"
#include "lessons/lesson2.h"

#include "lessons.h"
#include "bricks.h"
#include "edit.h"

void display_preparations()
{
	display_text_in_page((std::string("Подготовка к Скорочтению:\n\n") 
				+ right_shift(4) + std::string("Откройте программу Скорочтение.\n")
				+ right_shift(4) + std::string("Приготовьте журнал Наука и Жизнь.\n")
				+ right_shift(4) + std::string("Откройте сайты для чтения маленьких заметок.\n")
			     ),4,4,6);



	/*
	   scroll_down(7);
	   right_shift(4);std::cout << "Подготовка к Скорочтению:";
	   scroll_down(2);
	right_shift(4);std::cout << "Откройте программу Скорочтение.\n";
	right_shift(4);std::cout << "Приготовьте журнал Наука и Жизнь.\n";
	right_shift(4);std::cout << "Откройте сайты для чтения маленьких заметок.\n";
	scroll_down((25-6-6));
	std::getchar();
	*/
}

void lessons(const int32_t i)
{




}
/*
void lesson0()
{


	display_text_in_page((std::string("Task 0\n\n") 
				+ right_shift(4) + std::string("Упражнения по концентрации и расширению сферы зрения.\n")
				+ right_shift(4) + std::string("Подготовка:\n")
				+ right_shift(5) + std::string("Программа Скорочтение:\n")
				+ right_shift(6) + std::string("Тренажёр >> Нейронный ускоритель.\n")
				+ right_shift(5) + std::string("Таймер - 5 минут.\n")
				+ right_shift(4) + std::string("Описание задания:\n")
				+ right_shift(5) + std::string("Открыть программу.\n\n")
				
				+ right_shift(4) + std::string("1.Техника Мандарина\n")
				+ right_shift(4) + std::string("2.С Богом!\n")
			     ),7,3,11);

/*	scroll_down(3);
	right_shift(7);	std::cout << "Task 0";
	scroll_down(2);
	right_shift(4);std:: cout << "Упражнения по концентрации и расширению сферы зрения.\n";
	scroll_down(2);
	right_shift(4);std:: cout << "Подготовка:\n";
	right_shift(5);std::cout << "Программа Скорочтение:\n";
	right_shift(6);std::cout << "Тренажёр >> Нейронный ускоритель.\n";
	right_shift(5);std::cout << "Таймер - 5 минут.\n";
	right_shift(4);std::cout << "Описание задания:\n";
	right_shift(5);std::cout << "Открыть программу.\n";
	right_shift(4);std::cout << "1.Техника мандарина.\n";
	right_shift(4);std::cout << "2.С Богом!\n";






	scroll_down((25-3-2-2-9));
	std::getchar();

	scroll_down(8);
	right_shift(4);std::cout << "Упражнение 0 завершено";
	scroll_down(2);
	right_shift(4);std::cout << " У вас всё получилось!\n";
	right_shift(4);std::cout << "        Молодец!\n";
	scroll_down((25-8-2-1));
	std::getchar();

*/

}

void lesson1()
{
	display_text_in_page((std::string("Task 1\n\n") 
				+ right_shift(4) + std::string("Чтение и подсчёт слов.\n")
				+ right_shift(4) + std::string("Подготовка:\n")
				+ right_shift(5) + std::string("Текст с лёгким содержанием.\n")
				+ right_shift(5) + std::string("Таймер - 5 минут.\n")
				+ right_shift(4) + std::string("Описание задания:\n")
				+ right_shift(5) + std::string("Прочитать текст с одновременным подсчётом слов.\n\n")
				
				+ right_shift(4) + std::string("1.Техника Мандарина\n")
				+ right_shift(4) + std::string("2.Начали!\n")
			     ),7,3,11);

/*
	scroll_down(3);
	right_shift(7);	std::cout << "Task 1";
	scroll_down(2);
	right_shift(4);std:: cout << "Чтение и подсчёт слов.";
	scroll_down(2);
	right_shift(4);std:: cout << "Подготовка:\n";
	right_shift(5);std::cout << "Текст с лёгким содержанием.\n";
	right_shift(5);std::cout << "Таймер - 5 минут.\n";
	right_shift(4);std:: cout << "Описание задания:\n";
	right_shift(5);std::cout << "Прочитать текст с одновременным подсчётом слов.\n";
	right_shift(4);std::cout << "1.Техника мандарина.\n";
	right_shift(4);std::cout << "2.Начали!\n";
	
	scroll_down((25-3-2-7-1));
	std::getchar();
	
	scroll_down(8);
	int32_t minutes=1;
	right_shift(4);std::cout << "Input minutes:\n";
	scroll_down(28-8-1-1);
	std::cin >> minutes;
	run_timer((minutes*60)); //seconds

	scroll_down(8);
	right_shift(4);std::cout << "Упражнение 1 завершено";
	scroll_down(2);
	right_shift(4);std::cout << " У вас всё получилось!\n";
	right_shift(4);std::cout << "        Молодец!\n";
	scroll_down((25-8-2-1-1));
	std::getchar();

*/

}


void lesson2()
{
	display_text_in_page((std::string("Task 2\n\n") 
				+ std::string("\t\t\t\tЧтение столбиков с шаблоном.\n")
				+ right_shift(4) + std::string("Подготовка:\n")
				+ right_shift(5) + std::string("Текст столбиком.\n")
				+ right_shift(5) + std::string("Таймер - 5 минут.\n")
				+ right_shift(4) + std::string("Описание задания:\n")
				+ right_shift(5) + std::string("Cдвигать шаблон сверху вниз\n")
				+ right_shift(6) + std::string("со скоростью одна секунда на колонку.\n")
				+ right_shift(5) + std::string("Через прорез шаблона нужно \"схватить,узнать\"\n")
				+ right_shift(6) + std::string("слова без прочитывания.\n\n")
				+ right_shift(4) + std::string("1.Техника Мандарина\n")
				+ right_shift(4) + std::string("2.Начали!\n")
			     ),7,3,13);

/*	scroll_down(3);
	right_shift(7);	std::cout << "Task 2";
	scroll_down(2);
	right_shift(4);std:: cout << "Чтение столбиков с шаблоном.";
	scroll_down(2);
	right_shift(4);std::cout << "Подготовка:\n";
	right_shift(5);std::cout << "Текст столбиком.\n";
	right_shift(5);std::cout << "Таймер - 5 минут.\n";
	right_shift(4);std::cout << "Описание задания:\n";
	right_shift(5);std::cout << "Cдвигать шаблон сверху вниз\n";
	right_shift(6);std::cout << "со скоростью одна секунда на колонку.\n";
	right_shift(5);std::cout << "Через прорез шаблона нужно \"схватить,узнать\"\n";
	right_shift(6);std::cout << "слова без прочитывания.\n";
	right_shift(4);std::cout << "1.Техника мандарина\n";
	right_shift(4);std::cout << "2.Начали!\n";	
	scroll_down((25-3-2-10-1));
*/	
	
	}

					
void lesson3()
{
	display_text_in_page((std::string("Task 3\n\n") 
				+ std::string("\t\t\t\tЧтение орфографического словаря.\n")
				+ right_shift(4) + std::string("Подготовка:\n")
				+ right_shift(5) + std::string("Сайт https://povto.ru/books/slovari/orfograficheskiy-slovar-online\n")
				+ right_shift(5) + std::string("Время 10-15 страниц.\n")
				+ right_shift(4) + std::string("Описание задания:\n")
				+ right_shift(5) + std::string("Просматривать колонку слов,\n")
				+ right_shift(6) + std::string("слова узнаются, но не проговариваются.\n")
				+ right_shift(5) + std::string("По 2 секунды на страницу.\n\n")
				+ right_shift(4) + std::string("Техника Мандарина\n")
				+ right_shift(4) + std::string("Полетели!\n")
			     ),7,3,13);

	
//	std::system( WindowsOS ? "start \"\" chrome.exe \"https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm\"": "google-chrome\"https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm\"");
	scroll_down((25-9-1));
}

void lesson4()
{
	std:: cout << "\t\"Поле зрения\" (расширение сферического зрения)\n";
	std::cout << "\t\tПрограмма Скорочтение. Тренажёр >> Поле зрения.\n";
	std::cout << "\t\tВремя - 3 раза\n";
	std::cout << "\t\tТаймер -3-5 минут.\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Выполняйте задание\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson5()
{
	std:: cout << "\tПрочтите маленькую колонку и выделите главную мысль.\n";
	std::cout << "\t\tНебольшая колонка текста (90 слов)\n";
	std::cout << "\t\tТаймер - 2-3 минуты.\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Задание:\n";
	std::cout << "\t\t\t\tКак можно внимательнее отнестись к деталям\n";
	std::cout << "\t\t\t\tВыделить главную мысль\n";
	std::cout << "\t\t\t\tВслух пересказать как можно подробнее.\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson6()
{
	std:: cout << "\t\"Зеленая точка\" (упражнение на концентрацию)\n";
	std::cout << "\t\tПрограмма Скорочтение. Тренажёр >> Зелёная точка\n";
	std::cout << "\t\tВремя - 5 минут.\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Сконцентрируйтесь на точке\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
	
void lesson7()
{
	std:: cout << "\tУпражнение на память. Запомнить предмет.\n";
	std::cout << "\t\tЛюбой предмет.\n";
	std::cout << "\t\tТаймер - по 1 минуте 4 раза.\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Задание:\n";
	std::cout << "\t\t\t\tСначала рассматриваете предмет.\n";
	std::cout << "\t\t\t\tПотом закрываете глаза и воспроизводите в деталях.\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson8()
{
	std:: cout << "\tЗамечаем неодинаковость в крайних буквах.\n";
	std::cout << "\t\tПрограмма Скорочтение. Тренажёр >> Поле зрения\n";
	std::cout << "\t\tТаймер - 3 раза.\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Приступаем к заданию\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson9()
{
	std:: cout << "\tЗапоминаем художественную открытку\n";
	std::cout << "\t\tСайт с картинками.\n";
	std::cout << "\t\tТаймер - 20 секунд по 3 раза.\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Задание:\n";
	std::cout << "\t\t\t\tБерем открытку.\n";
	std::cout << "\t\t\t\tСмотрим в центр и пытаемся увидеть изображения по краям.\n";
	std::cout << "\t\t\t\tЗакройте глаза и воспроизведите в памяти, что увидели,\n";
	std::cout << "\t\t\t\t\tс предельной точностью.\n";
	std::cout << "\t\t\t3.Про себя начинаем отсчёт до 20.\n";
	std::cout << "\t\t\t4.Вперёд!\n";

	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson10()
{
	std:: cout << "\tТаблица Шульте.\n";
	std::cout << "\t\tПрограмма Скорочтение. Тренажёр >> Таблица Шульте\n";
	std::cout << "\t\tТаймер - 3 раза.\n";
	std::cout << "\t\t\t1.Расслабиться с помощью техники мандарина.\n";
	std::cout << "\t\t\t2.Начали!\n";

	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}


void lesson11()
{
	std:: cout << "\tВыделить главную мысль в тексте.\n";
	std::cout << "\t\tМаленькая статья (90 слов)\n";
	std::cout << "\t\t\t(Журнал Наука и жизнь).\n";
	std::cout << "\t\tТаймер - 45 секунд.\n";
	std::cout << "\t\t\t1.Расслабиться с помощью техники мандарина.\n";
	std::cout << "\t\t\t2.Задание:\n";
	std::cout << "\t\t\t\tБыстро, но вдумчиво прочитать.\n";
	std::cout << "\t\t\t\tВыделить главные мысли текста.\n";
	std::cout << "\t\t\t3.Вперёд!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}

void lesson12()
{
	std:: cout << "\tЧтение литературы.\n";
	std::cout << "\t\tТаймер - 25-30 страниц.\n";
	std::cout << "\t\tНаучно-популярная литература,\n";
	std::cout << "\t\t\tили общественно-политическая.\n";
	std::cout << "\t\t\tили литература по специальности.\n";

	std::cout << "\t\t\t1.Расслабиться с помощью техники мандарина.\n";
	std::cout << "\t\t\t2.Задание:\n";
	std::cout << "\t\t\t\tПосле прочтения логически обрабатывать информацию,\n";
	std::cout << "\t\t\t\t\tвыделить главные мысли.\n";
	std::cout << "\t\t\t3.3! 2! 1! ПУСК!!!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}

void lesson13()
{
	std:: cout << "\tРасширяем поле зрения.\n";
	std::cout << "\t\tТаймер - 3 раза.\n";
	std::cout << "\t\tПрограмма Скорочтение. Тренажёр >> Поле зрения.\n";

	std::cout << "\t\t\t1.Расслабиться с помощью техники мандарина.\n";
	std::cout << "\t\t\t2.Задание:\n";
	std::cout << "\t\t\t\tЗамечаем неодинаковость в крайних буквах.\n";
	std::cout << "\t\t\t3.Приступаем к заданию!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson14()
{
	std:: cout << "\tОграничиваем количество фиксаций на строчке.\n";
	std:: cout << "\t\tПодготовка:\n";
	std::cout << "\t\t\tВремя 5-8 минут.\n";
	std::cout << "\t\t\tЖурнал Наука и жизнь.\n";
	std::cout << "\t\t\tЦветной карандаш.\n";
	std:: cout << "\t\tОписание задания:\n";
	std::cout << "\t\t\tРазделите текст мысленно на 4 колонки (цветным карандашом).\n";
	std::cout << "\t\t\tСтарайтесь делать по одной фиксации, выделяя ключевые слова.\n";
	std::cout << "\t\t\tСтрочку должны научиться читать за 4 фиксации.\n";
	std::cout << "\t\t\t\tЧерез неделю страницу книги разделите на 3 колонки.\n";
	std::cout << "\t\t\t\tЧерез 4 недели на 2 колонки.\n";
	std:: cout << "\t\t1.Техника мандарина.\n";
	std:: cout << "\t\t2.Расслабтесь, думайте о теме текста.\n";
	std:: cout << "\t\t3.Начали!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson15()
{
	std:: cout << "\tПоиск несоответствующих пар.\n";
	std:: cout << "\t\tПодготовка:\n";
	std::cout << "\t\t\tПо 2 раза - каждое упражнение.\n";
	std::cout << "\t\t\tПрограмма Скорочтение >> Пары слов.\n";
	std::cout << "\t\t\tПрограмма Скорочтение >> Чётные числа.\n";
	std:: cout << "\t\tОписание задания:\n";
	std::cout << "\t\t\tПопеременно включаем упражнение по 2 раза.\n";
	std:: cout << "\t\t1.Техника мандарина.\n";
	std:: cout << "\t\t2.Расслабтесь, думайте о теме текста.\n";
	std:: cout << "\t\t3.Начали!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}

void lesson16()
{
	std:: cout << "\tЧтение сложного текста без регрессии.\n";
	std:: cout << "\t\tПодготовка:\n";
	std::cout << "\t\t\tСтраница сложного текста.\n";
	std::cout << "\t\t\tЛист бумаги, покрывающий ширину отрывка.\n";
	std:: cout << "\t\tОписание задания:\n";
	std::cout << "\t\t\tНайдите отрывки с трудной и незнакомой лексикой не по вашей специальности.\n";
	std::cout << "\t\t\tЧтение со скоростью 250 знаков в минуту (бодро).\n";
	std::cout << "\t\t\tПри чтении листом бумаги закрывайте прочитанные строки, двигаясь сверху вниз.\n";
	std:: cout << "\t\t1.Техника мандарина.\n";
	std:: cout << "\t\t2.Расслабтесь, думайте о теме текста.\n";
	std:: cout << "\t\t3.Начали!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson17()
{
	std:: cout << "\tЧтение вслух.\n";
	std:: cout << "\t\tПодготовка:\n";
	std::cout << "\t\t\t2 страницы любого текста.\n";
	std::cout << "\t\t\tЛист бумаги, покрывающий ширину отрывка.\n";
	std:: cout << "\t\tОписание задания:\n";
	std::cout << "\t\t\tЧитайте вслух текст выразительно, чётко произнося каждое слово,\n";
	std::cout << "\t\t\t\tне повторяясь и не заикаясь.\n";
	std::cout << "\t\t\tНужно добиваться хорошего плавного чтения  без подготовки в разговорном темпе.\n";
	std::cout << "\t\t\t\tЧерез неделю страницу книги разделите на 3 колонки.\n";
	std::cout << "\t\t\t\tЧерез 4 недели на 2 колонки.\n";
	std:: cout << "\t\t1.Техника мандарина.\n";
	std:: cout << "\t\t2.Расслабтесь, думайте о теме текста.\n";
	std:: cout << "\t\t3.Начали!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}

void lesson18()
{
	std:: cout << "\tЧтение столбиков с шаблоном 1.\n";
	std:: cout << "\t\tПодготовка:\n";
	std::cout << "\t\t\tВремя 3-5 минут.\n";
	std::cout << "\t\t\tТекст столбиком.\n";
	std::cout << "\t\t\tШаблон 1.\n";
	std:: cout << "\t\tОписание задания:\n";
	std::cout << "\t\t\tСо скоростью одна секунда на колонку\n";
	std::cout << "\t\t\t\tдвигать шаблон сверху вниз\n";
	std::cout << "\t\t\t\tсо скоростью одна секунда на колонку.\n";
	std::cout << "\t\t\tЧерез прорез шаблона нужно \"схватить,узнать\" слова\n";
	std::cout << "\t\t\t\tбез прочитывания.\n";
	std:: cout << "\t\t1.Техника мандарина.\n";
	std:: cout << "\t\t2.Расслабтесь, думайте о теме текста.\n";
	std:: cout << "\t\t3.Начали!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson19()
{
	std:: cout << "\tПоиск несоответствующих пар.\n";
	std:: cout << "\t\tПодготовка:\n";
	std::cout << "\t\t\tПо 2 раза - каждое упражнение.\n";
	std::cout << "\t\t\tПрограмма Скорочтение >> Пары слов.\n";
	std::cout << "\t\t\tПрограмма Скорочтение >> Чётные числа.\n";
	std:: cout << "\t\tОписание задания:\n";
	std::cout << "\t\t\tПопеременно включаем упражнение по 2 раза.\n";
	std:: cout << "\t\t1.Техника мандарина.\n";
	std:: cout << "\t\t2.Расслабтесь, думайте о теме текста.\n";
	std:: cout << "\t\t3.Начали!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson20()
{
	std:: cout << "\tИщем в тексте определённые слова.\n";
	std:: cout << "\t\tПодготовка:\n";
	std::cout << "\t\t\tВыбрать 20 строчек текста.\n";
	std:: cout << "\t\tОписание задания:\n";
	std::cout << "\t\t\t1.За 2 секунды найдите все названия\n";
	std::cout << "\t\t\t\tвидов чего-либо (птиц, машин),\n";
	std::cout << "\t\t\t\tвсе прилагательные,все глаголы.\n";
	std::cout << "\t\t\t2.За 2 секунды подсчитайте сначала глаголы,\n";
	std::cout << "\t\t\t\tзатем - прилагательные,\n";
	std::cout << "\t\t\t\tзатем - существительные.\n";
	std::cout << "\t\t\t3.За 3 секунды найдите ключевые слова строчек.\n";
	std:: cout << "\t\t1.Техника мандарина.\n";
	std:: cout << "\t\t2.Расслабьтесь, думайте о теме текста.\n";
	std:: cout << "\t\t3.Начали!\n";


	std::string FILENAME = "russian_words.txt";
	std::vector<std::string> source_list_of_words;
	//get_all_lines_from_output_file(FILENAME,source_list_of_words);

	int32_t number_of_words = 20;
	std::vector<std::string> set_of_words;
	create_set_of_words(source_list_of_words,
		number_of_words,set_of_words);
	
	std::cout << "\t\t\t1.За 2 секунды найдите все названия\n";
	std::cout << "\t\t\t\tвидов чего-либо (птиц, машин),\n";
	void display_n();
	std::getchar();
	display_set_of_words(set_of_words);
	std::getchar();

	std::cout << "\t\t\t1.За 2 секунды найдите все прилагательные.\n";
	void display_n();
	std::getchar();
	display_set_of_words(set_of_words);
	std::getchar();


	std::cout << "\t\t\t1.За 2 секунды найдите все глаголы.\n";
	void display_n();
	std::getchar();
	display_set_of_words(set_of_words);
	std::getchar();
	
	set_of_words.clear();
	create_set_of_words(source_list_of_words,
		number_of_words,set_of_words);

	
	std::cout << "\t\t\tЗа 2 секунды подсчитайте  глаголы.\n";
	void display_n();
	std::getchar();
	display_set_of_words(set_of_words);
	std::getchar();
	
	std::cout << "\t\t\t\tЗа 2 секунды подсчитайте прилагательные.\n";
	void display_n();
	std::getchar();
	display_set_of_words(set_of_words);
	std::getchar();

	std::cout << "\t\t\t\tЗа 2 секунды подсчитайте существительные.\n";
	void display_n();
	std::getchar();
	display_set_of_words(set_of_words);
	std::getchar();

	set_of_words.clear();
	create_set_of_words(source_list_of_words,
		number_of_words,set_of_words);
	
	std::cout << "\t\t\t3.За 3 секунды найдите ключевые слова строчек.\n";
	void display_n();
	std::getchar();
	display_set_of_words(set_of_words);
	std::getchar();


}

*/		
	
	

		
			 
		
