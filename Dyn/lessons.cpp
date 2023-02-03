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

#include "lessons.h"
#include "bricks.h"

void display_preparations()
{
	scroll_down(6);
	std::cout << "\n\t\tПодготовка к Скорочтению:\n\n";
	std::cout << "\t\t\tОткройте программу Скорочтение.\n";
	std::cout << "\t\t\tПриготовьте журнал Наука и Жизнь.\n";
	std::cout << "\t\t\tОтройте сайты для чтения маленьких заметок.\n";
	scroll_down((25-6-6));
}

void lesson0()
{
	scroll_down(6);
			std::cout << "\t\t\t Task 0.\n\n";
	std:: cout << "\tУпражнения по концентрации и расширению сферы зрения.\n";
	std::cout << "\t\tПрограмма Скорочтение:\n";
	std::cout << "\t\t\tТренажёр >> Нейронный ускоритель.\n";
	std::cout << "\t\t5 минут.\n";
	std::cout << "\t\tЗадание:\n";
	std::cout << "\t\t\t1.Техника мандарина.\n";
	std::cout << "\t\t\t2.Открыть программу.\n";
	
	scroll_down((25-6-9));
	std::getchar();

	scroll_down(6);

	right_shift(4);
	std::cout << "Упражнение 0 закончено.\n";
	scroll_down((25-6-2));
	std::getchar();



}

void lesson1()
{
	scroll_down(6);
			std::cout << "\t\t\t Task 1.\n\n";
	std:: cout << "\tЧтение и подсчёт слов.\n";
	std::cout << "\t\tТекст с лёгким содержанием.\n";
	std::cout << "\t\tТаймер - 5 минут.\n";
	std::cout << "\t\tЗадание:\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Прочитать текст с одновременным подсчётом слов.\n";
	scroll_down((25-6-9));
	std::getchar();
	run_timer((5*60)); //seconds

	scroll_down(6);

	right_shift(4);
	std::cout << "Упражнение 1 закончено.\n";
	scroll_down((25-6-2));
	std::getchar();


}


void lesson2()
{
	scroll_down(6);

			std::cout << "\t\t\t Task 2.\n\n";
	std:: cout << "\tЧтение столбиков с шаблоном.\n";
	std::cout << "\t\tТекст столбиком.\n";
	std::cout << "\t\tШаблон.\n";
	std::cout << "\t\tТаймер -3-5 минут.\n";
	std::cout << "\t\t\t1.Техника мандарина.\n";
	std::cout << "\t\t\t2.Задание:\n";
	std::cout << "\t\t\t\tдвигать шаблон сверху вниз\n";
	std::cout << "\t\t\t\t\tсо скоростью одна секунда на колонку.\n";
	std::cout << "\t\t\t\tЧерез прорез шаблона нужно \"схватить,узнать\"\n";
	std::cout << "\t\t\t\t\tслова без прочитывания.\n";
	scroll_down((25-6-13));
	std::getchar();

	run_timer((5*60));

	scroll_down(6);

	right_shift(4);
	std::cout << "Упражнение 2 закончено.\n";
	scroll_down((25-6-2));
	std::getchar();

	}

/*					
void lesson3()
{
	std:: cout << "\tЧтение орфографического словаря.\n";
	std::cout << "\t\tСайт https://povto.ru/books/slovari/orfograficheskiy-slovar-online\n";
	std::cout << "\t\tВремя 10-15 страниц.\n";
	std::cout << "\t\tЗадание:\n";
	std::cout << "\t\t\tПросматривать колонку слов,\n";
	std::cout << "\t\t\t\tслова узнаются, но не проговариваются.\n";
	std::cout << "\t\t\t\tПо 2 секунды на страницу\n";
	std::cout << "Press \'Enter\':\n"; 
	
	bool WindowsOS = true;
	std::system( WindowsOS ? "start \"\" chrome.exe \"https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm\"": "google-chrome\"https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm\"");
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
	
	

		
			 
		
