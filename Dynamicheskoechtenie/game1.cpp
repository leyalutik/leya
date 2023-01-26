#include "game1.h"
#include "parse_file.h"


//List of words for memory
//
//
//
//input number of words
//input number of tries

void display_preparations()
{
	std::cout << "\t\tПодготовка к Скорочтению:\n";

	std::cout << "\t\tОткройте Таймер\n"; 
	std::cout << "\t\tОткройте программу Скорочтение\n";
	std::cout << "\t\tПриготовьте журнал Наука и Жизнь\n";
	std::cout << "\t\tОтройте сайты для чтения маленьких заметок\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}

void lesson0()
{
	std:: cout << "\tУпражнения по концентрации и расширению сферы зрения.\n";
	std::cout << "\t\tПрограмма Скорочтение:Тренажёр >> Нейронный ускоритель.\n";
	std::cout << "\t\t5 минут\n";
	std::cout << "\t\tЗадание:\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Открыть программу\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";


}

void lesson1()
{
	std:: cout << "\tЧтение и подсчёт слов.\n";
	std::cout << "\t\tТекст с лёгким содержанием.\n";
	std::cout << "\t\tТаймер - 5 минут.\n";
	std::cout << "\t\tЗадание:\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Прочитать текст с одновременным подсчётом слов.\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";



}
void lesson2()
{
	std:: cout << "\tЧтение столбиков с шаблоном.\n";
	std::cout << "\t\tТекст столбиком\n";
	std::cout << "\t\tШаблон\n";
	std::cout << "\t\tТаймер -3-5 минут.\n";
	std::cout << "\t\t\t1.Техника мандарина\n";
	std::cout << "\t\t\t2.Задание:\n";
	std::cout << "\t\t\t\tдвигать шаблон сверху вниз\n";
	std::cout << "\t\t\t\t\tсо скоростью одна секунда на колонку.\n";
	std::cout << "\t\t\t\tЧерез прорез шаблона нужно \"схватить,узнать\" слова\n";
	std::cout << "\t\t\t\t\tбез прочитывания.\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";

}

					
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
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";

	bool WindowsOS = true;
	std::system( WindowsOS ? "start \"\" chrome.exe \"https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm\"": "google-chrome\"https://povto.ru/books/slovari/orfograficheskiy-slovar-online/orfograficheskii-slovar-online-bukva-a.htm\"");

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
	std:: cout << "\tЧтение сложного текста без регрессии.\n";
	std:: cout << "\t\tПодготовка:\n";
	std::cout << "\t\t\tСтраница сложного текста.\n";
	std::cout << "\t\t\tЛист бумаги, покрывающий ширину отрывка.\n";
	std:: cout << "\t\tОписание задания:\n";
	std::cout << "\t\t\tНайдите отрывки с трудной и незнакомой лексикой не по вашей специальности.\n";
	std::cout << "\t\t\tЧтение со скоростью 250 знаков в минуту (бодро).\n";
	std::cout << "\t\t\tПри чтении листом бумаги закрывайте прочитанные строки, двигаясь сверху вниз.\n";
	std::cout << "\t\t\t\tЧерез неделю страницу книги разделите на 3 колонки.\n";
	std::cout << "\t\t\t\tЧерез 4 недели на 2 колонки.\n";
	std:: cout << "\t\t1.Техника мандарина.\n";
	std:: cout << "\t\t2.Расслабтесь, думайте о теме текста.\n";
	std:: cout << "\t\t3.Начали!\n";


	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}
void lesson16()
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

void lesson17()
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
void lesson18()
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
void lesson19()
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
	get_all_lines_from_output_file(FILENAME,source_list_of_words);

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

	
			
void display_set_of_words(const std::vector<std::string>& set_of_words)
{
		for(auto& s:set_of_words)
	{
		std::cout << "\t\t\t" << s << "\n";
	}

}

void game5_russian(const std::vector<std::string>& source_list_of_words,
		const int32_t number_of_words)	
{
	std::cout << "\n";
	std::cout << "\t\t\t {Набор слов} \n";
	std::cout << "\t\t-------------------------------\n";
	std::cout << "\n\n\n";

	//create arbitrarily number from [0,number_of_words)

	std::vector<std::string> set_of_words;
	create_set_of_words(source_list_of_words,number_of_words,set_of_words);
	
//	std::srand(std::static_cast<unsigned int>(std::time(nullptr)));
	size_t any_number = unsigned(std::rand())%number_of_words;
	
	std::cout << "Найдите слово: " << set_of_words[any_number] << "\n\n";
	std::getchar();

	display_set_of_words(set_of_words);
	size_t verbs,nowns,adjs;
	std::getchar();

}

void game5(const std::vector<std::string>& source_list_of_words,
		const int32_t number_of_words)	
{
	std::cout << "\n";
	std::cout << "\t\t\t {Set of words} \n";
	std::cout << "\t\t-------------------------------\n";
	std::cout << "\n\n\n";

	//create arbitrarily number from [0,number_of_words)

	std::vector<std::string> set_of_words;
	create_set_of_words(source_list_of_words,number_of_words,set_of_words);
	
//	std::srand(std::static_cast<unsigned int>(std::time(nullptr)));
	size_t any_number = unsigned(std::rand())%number_of_words;
	
	std::cout << "Find the word: " << set_of_words[any_number] << "\n\n";
	std::getchar();

	display_set_of_words(set_of_words);
	size_t verbs,nowns,adjs;
	std::cout << "\n\n";
	std::cout << "Count verbs for 2 secunds:\n";
	std::cin >> verbs;
	std::cout << "Count nowns for 2 secunds:\n";
	std::cin >> nowns;
	std::cout << "Count adjectivess for 2 secunds:\n";
	std::cin >> adjs;
	std::cout << "Check your answers:" 
		<< "Verbs: " << verbs << "\n"
		<< "Nowns: " << nowns << "\n"
		<< "Adjectives: " << adjs << "\n";
	std::cout << "Press the \'Enter\':\n";
	display_set_of_words(set_of_words);

	std::getchar();

}
void game1(const std::vector<std::string>& source_list_of_words,
		const int32_t number_of_words,
		const int32_t number_of_tries)
{//
	int32_t i=0;
	std::cout << "\n";
	std::cout << "\t\t\t {Set of words} \n";
	std::cout << "\t\t-------------------------------\n";
	std::cout << "\n\n\n";
	while(i<number_of_tries)
	{
		++i;

		std::vector<std::string> set_of_words;
		create_set_of_words(source_list_of_words,number_of_words,set_of_words);

		display_set_of_words(set_of_words);

		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nn";

		std::getchar();

	}
}

void create_set_of_words(const std::vector<std::string>& source_list_of_words,
		const int32_t number_of_words, std::vector<std::string>& set_of_words)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	
	int i=0;
	while(i < number_of_words)
	{
		++i;

		int32_t size = source_list_of_words.size();
		//std::cout << "size =" << size  << "\n";
		int32_t iter = int(std::rand()) % size;
		//std::cout << "iterator =" << iter << "\n";  
		set_of_words.push_back(source_list_of_words[iter]);
	}

}

void display_n()
{
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "\n\n\n\n\n";
}

	
	
	

		
			 
		
