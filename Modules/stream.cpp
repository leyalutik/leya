#include "stream.h"


bool check_istream(std::istream& ist)
{
	if(std::cin.fail()) //  if (std::ios_base::iostate == std::iosbase::failbit)
	{
		return false;
	}
	if(std::cin.bad())    if(std::ios_base::iostate == std::iosbase::bad)
	{
		throw std::runtime_error("In function check_istream stream was corrupted");
	}
	
	return true;
}

void clear_istream(std::istream& ist) //set flags to good state and clear from garbage
{
	ist.clear();
	ist.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

std::string istream_buffer(std::istream& ist)
{
	std::string buffer_staff;
	std::istringstream local;
   	auto cin_buff = std::cin.rdbuf(); // save pointer to std::cout buffer
 
    	std::cin.rdbuf(local.rdbuf()); // substitute internal std::cout buffer with
       	// buffer of 'local' object
	buffer_staff = local.str(); 
    	// now std::cin work with 'local' buffer
    	// you don't see this message

 
   	 // go back to old buffer
   	 std::cin.rdbuf(cin_buff);

	return buffer_staff;
}


====================================================================
=========================   {10.1} Input and Output  ========================
====================================================================
IPh:
	specialized expertise		специальные знания

UW:
	to watch out			остерегаться, напряженно ожидать
	to set up				настроить
	appropriaate			соответствующий
	classification fits our tools		соответствует нашим инструментам
	framework			платформа
Termins:

Поток (stream) — это абстракция, которая представляет устройство с операциями ввода и вывода. Таким образом, поток можно понимать как источник и/или приёмник бесконечного количества символов.

Потоки обычно привязываются к физическому источнику/приёмнику символов, например, файлу, клавиатуре или консоли. При этом символы, читаемые из или записываемые в поток действительно физически вводятся или выводятся на устройство. Например, файловые потоки в C++ являются объектами для манипуляций с файлами: после того, как файловый поток открывает файл, любая операция ввода/вывода на этом потоке физически отображается в файле.

iostream - (1) standard library flexible, extensible, type-safe input and output framework. (1) stream that can be used for both input and output. 

standard library - The library defined in the C++ standard. Contains strings, stream I/O, a framework of containers and algorithms, support for numerical computation, support for internationalization, the C standard library, and some language support facilities.

string stream - stream attached to a string.

file stream - stream attached to a file.

Для большинства программ является ключевым умение обрабатывать входящую информацию из разнообразных источников данных и выводить в определенном формате в назначенное место.

Источники данных : 
	Монитор, компоненты компьюетра, наша программа.
Место для вывода данных : 
	Монитор, компоненты кмпьютера, наша программа.

Способ передачи и приёма данных у каждого устройства разный, и сами данные тоже разные. 
Поэтому наша программа обрабатывает данные  не с устройствами напрямую, а через библиотечные функции,
которые обрабатывает и предоставляет данные , полученные с операционной системы, которая получила их от соответствующих драйверов устройств.
			
		АБСТРАКТНАЯ МОДЕЛЬ ВВОДА/ВЫВОДА ДАННЫХ
(Вводимые символы с клавиатуры)
Data source:
	Input device -> Device driver -> input library -> our program 
(Экран монитора компьютера)
Data Destination:
	our program -> Output library -> Device driver -> Output device 

В нашей модели вводимые данные представляются как последовательности(потоки) символов(байтов),
которые обрабатывается библиотеками ввода/вывода. Более сложные данные не рассматриваются в этой книге.

Мы должны в каждой программе:
1) Настроить и установить правильно потоки ввода/вывода к источнику ввода и к месту назначения.
2) Считывать и вписывать информацию в эти потоки.

Как реализован Ввод/Вывод,
	который состоит из потоков форматированных данных,
		покажем через стандартную библиотеку С++.

			КЛАССИФИКАЦИЯ ДАННЫХ I/O:
• Streams of (many) data items
   Потоки (множества) единиц данных 
	(usually to/from files, network connections,
	recording devices, or display devices)
• Interactions with a user at a keyboard
   Взаимодействие с пользователем через клавиатуру
• Interactions with a user through a graphical interface (outputting objects,
receiving mouse clicks, etc.)
   Взаимодействия с пользователем через графический интерфейс
	

Граница между пунктами условная. Вывод текстовых символов, обращенных к браузеру,
покажет нам результат, в котором скорее всего будет организовано взаимодействие с пользователем,
и возможно, выдаст нам графические элементы.
С другой стороны взаимодействие с графической системой возможно представить в виде цепочки символов.

Но эта классификация соответствует нашему оснащению.
Первые 2 типа данных представляются  абстракциями (потоки ввода/вывода) из стандартной библиотеке С++ 
и  поддерживаются  практически всеми операционными системами.


=================================================================
=======================           {10.2}                  ========================
=======================  The I/O stream model  =========================
================  МОДЕЛЬ ПОТОКОВ ВВОДА/ВЫВОДА  =================
==================== в стандартной библиотеке С++  ====================
================================================================
UW:


IPH:
	feature			функция

Termins:

Buffer - структура данных, которую использует class ostream и istream, для хранения информации,
	которую вы хотите передать в назначенное место.
	С помощью этой структуры классы взаимодействует с операционной системой. 
	(поток взаимодействует с ОС, ОС с драйвером, драйвер с устройством).



Стандартная библиотека C++ предоставляет 
тип istream для работы с потоками ввода

и тип ostream для работы с потоками вывода.

Поток ввода из класса (типа) istream называется cin.
Поток вывода из класса (типа) ostream называется cout.

Класс ostream 
1) Преобразует данные разных типов в цепочку символов
2) Отправляет эту последовательность символов в заданное место 
	(консоль, файл, операционную память, другой компьютер)

			МОДЕЛЬ ВЫВОДА
Values of various types      ----------------------------------->   character sequences
'c'			->
(12,34)			-> ostream	-> Buffer		-> somewhere		
123			->



Класс istream
1)Преобразует цепочку символов в значения разных типов
2)Получает эту последовательность из какого-то источника данных.
	(консоль, файл, ОС, другой компьютер)


			МОДЕЛЬ ВВОДА
Character sequences      ----------------------------------->   values of various types
						<- 'c'
somewhere	<-istream		<-Buffer		<- (12,34)
						<- 123

Класс istream также использует буффер для взаимодействия с операционной системой.
Когда вы используете класс istream, который подключён к клавиатуре,
	всё, что вы вводите, сохраняется в буффере до тех пор, пока не нажмёте <Enter>.

Одно из главных назначений вывода ostream обеспечить данные, пригодные для чтения человеком.
	Веб-страницы, научные статьи, емейлы.
Таким образом ostream имеет много функций для настройки вывода текста.

И также, большая часть входных данных пишутся людьми
	или приводятся к специальному виду для удобства чтения.

Таким образом класс istream предоставляет функции 
	для считывания выходных данных,создаваемых ostream.

We’ll discuss formatting in §11.2 
how to read non-character input in §11.3.2. 

Самая большая сложность - это обработка ошибок, связанных со вводом.





=============================================================================
================================== { 10.3 } =====================================
===================================  Files  =====================================
==================================  Файлы =====================================
=============================================================================
		
Unknown Words:
	so far					до сих пор
Interesting Phrases:
	The format serves the same role			Формат выполняет ту же роль
	We can make sense of the bits in a file		Мы можем понять смысл битов в файле
	we can get an awfully long way			Мы можем пройти ужасно долгий путь
		with that assumption				с таким допущением
	large-capacity storage device			устройство хранения большой ёмкости
	ostream attached to a file			ostream прикрепляется к файлу
Termins:
	Object 	(1) a contiguous region of memory holding a value of some type. 
		(2) a named or unnamed variable of some type; an object of a type with a constructor is not considered an 			object before the constructor has completed and is no longer considered an object once a
			destructor has started executing for it. Objects can be allocated in static memory, on the stack,
			on on the free store.
	file - a sequence of bytes or words holding information in a computer. 
		The term "file" is usually reserved to information placed on disk or elsewhere outside the main memory. 
		The iostream part of the C++ standard library provides ifstream, ofstream,
			and fstream as abstraction for accessing files.


----------------------------
Мы не можем хранить всю информацию в операционной системе,
	она маленькая по размеру и информацию хранит недолго.
	
Мы храним её на дисках или устройствах большой ёмкости.
Такое хранение позволяет сохранять данные надолго и сохранять большое количество.

Информация хранится в файлах.
Самая базовая модель файла - последовательность байтов с нумерацией от нуля и выше.
Файл имеет формат, т.е. набор правил, который определяет как преобразовать каждый байт. (для вывода на экран или ещё куда).
Например в текстовом файле, первые 4 байта будут 4-мя символами.
On the other hand, if we have a file that uses a binary representation of integers,
those very same first 4 bytes will be taken to be the (binary) representation of
the first integer (see §11.3.2). (Пояснения в 11-ой главе. Пойду туда.)
С другой стороны, если мы имеем файл, который использует двоичное представление целых числел,
	то те же первые 4 байта будут расшифрованы как двоичного представление первого целого числа.

Формат для файла выполняет ту же роль, что и тип объекта для операционной системы.
Мы можем расшифровать  последовательность байтов в файле, только если знает файла формат.

Для файла:
класс (фреймворк, платформа) ostream преобразует объекты в цепочку символов в операционной памяти,
	создаёт поток (абстракция),
	и через этот поток записывает эту последовательность символов в любой файл.   
класс istream создаёт поток от любого файла,
	извлекает оттуда цепочку символов и преобразует их в объекты. 

				ПРОСТАЯ МОДЕЛЬ

	ДИСК                      < ------------------------------------ >                     MAIN MEMORY
				I/O system
 
	файлы			iostreams				Objects			
    (последовательность байтов) 					         (of various types)

Мы берем допущения, что последовательность байтов - это последовательность символов,
	в нашем обычном представлении.(это не так, на самом деле)
Также предполагаем, что все файлы записаны на дисках.
	 (не в интернет-пространстве, не в Операционной Памяти и т.д.,
	а на вращающихся магнитных накопителях (флэшки входят в эту категорию))

Для чтения файла:
	1) Знать имя файла.
	2) Открыть файл (для чтения).
	3) Считать последовательность символов.
	4) Закрыть файл. (хотя обычно это делается неявно)

Для записи файла:
	1) Обозначить имя файла.
	2) Открыть файл (для записи) или создать новый файл с этим именем.
	3) Записать туда объекты из главной памяти.
	4) Закрыть файл. (обычно делается неявно)
 
====================================================================
============================== { 10.4 } ================================
============================= Opening a file. =============================
============================ Открытие файла ============================
=====================================================================

Unknown words:
	flush				смыть,очистить,вспыхнуть,покраснеть
					

Interesting phrases:

Termins:

класс ifstream это istream для считывания с файла. (аналогично оператору std::cin для чтения из консоли)
класс ofstream это ostream для записи в файл.    (аналогично оператору std::cout для записи в консоль)
класс fstream (аналогично iostream) запускает одновременно 2 потока: для записи и для чтения.

Перед использованием файловых потоков (ifstream,ofstream,fstream), они должны быть привязаны к определенному файлу.

Открытие файла в классе ifstream
Пример:
	std::cout << "Please, enter input file:\n";
	std::string iname;
	std::cin >> iname;
	std::ifstream ist{iname};    // open file for reading
	if(!ist)
	{
		throw std::runtime_error("Can't open input file " + iname);
	}
Определение ifstream c именем iname, открывает файл с этим именем для чтения.

Условие  if(!ist)  проверяет, что файл был открыт должным образом.
После этого мы можем читать из файла точно также как,
	если бы мы считывали из консоли из потока std::cin класса istream.

Открытие файла в классе ofstream
Пример:
	std::cout << "Please, enter file name:\n";
	std::string name;
	std::cin >> name;
	
	std::ofstream ost{name};
	if(!ost)
	{
		throw std::runtime_error("Can't open output file");
	}
	std::cout << "File " << name << " is able for writing.\n";

}
Определение файлового потока ostream именем файла oname,
	открывает файл oname для записи через поток ost
Условие (!ost) проверяет, что файл открылся успешно.
И мы можем вносить записи в файл тем же образом, что и std::cout в консоль.
Пример:
	for (Point p: points)
	{
 		ost << '(' << p.x << ',' << p.y << ")\n";
	}

Когда файл выходит за пределы области видимости,
	файл автоматически закрывается.
Когда файл закрыт, его связанный с ним буффер очищается,
	т.е. всё содержимое буффера (последовательность символов)
	записывается в файл.
Совет:
	1)Лучше всего открывать файлы в начале программы до того,
		как будут выполнены какие-либо серьезные вычисления. 
	2)Самый лучший способ закрыть файл - выйти за область видимости потока.
		(При создание потока-объекта класса ostream или istream
			происходит неявное открытие файла с заданным именем.)


void interesting_function()
{	
	std::ostream ost{"namefile.txt"}; //OPENING FILE  
	if(!ost) 
	{ 
		throw std::ruuntime_error("Mistake!");
	}
	ost << "Hello!\n";
} //CLOSING FILE

//Можно использовать явные функции open() close().
/.Но будет трудно найти, где начинается поток,
	где заканчивается, что приведет к ошибкам.
//И будет больше вероятность, 
	что кто-то воспользуется потоком до открытия или после закрытия.



 ===========================================================================
============================ { 10.5 } =========================================
=======================  Reading and writing a file.  =================================
======================== Чтение и запись файла  ==================================
============================================================================

Unknown words:				
	once a stream is initialized			Как только поток инициализирован.
	In particular, we can use ...			В частности мы можем использовать ....
Interesting phrases:
	No further formatting is			Никакого большего редактирования текста
		assumed					не предполагается.
	This is a typical input loop.			Стандартный цикл считывания данных.	 
	The temperature readings from a
		weather station	
Termins:

 				ЧТЕНИЕ ФАЙЛА
Дан файл с данными в таком простом формате:
	0 60.7
	1 60.6
	2 60.3
	3 59.22
	. . .
Эти данные последовательности пары значений (час-температура).

Создадим тип считывания этой пары
	struct Reading 	//temperature reading
	{
		int hour;    //[0,23]
		double temperature;   farenheit
	}
Инициализируем поток :
	std::istream ist{iname};

Алгоритм считывания данных:

	std::vector<Reading> elements;
	int hour;
	double temperature;
	std::vector
	if(!ist)
	{
		throw error("Can't open file.\n");
	}
	//стандартный цикл считывания		
	while(ist >> hour >> temperature)
	{
		if(hour > 23 || hour <0)
		{
			throw std::runtime_error("Out of range" + std::to_string(__LINE__);
		elements.push_back(Reading{hour,temperature});
	}
Вот такой алгоритм ввода.

Этой части кода не важно откуда считываются данные.

Программе важно, чтобы использовалься поток ввода типа istream
	и считанные данные имели ожидаемый формат. 

			ЗАПИСЬ ДАННЫХ В ФАЙЛ

Запись в файл проходит аналогично записи в консоли потока ostream через оператор cout.
Не нужно специально смотреть какой тип потока вывода мы используем, все обозначения одинаковы.

Пример использования:
	for (int i=0; i<temps.size(); ++i)
	{
 		ost << '(' << temps[i].hour << ',' << temps[i].temperature << ")\n";
	}

Поток ost внесёт в файл эту запись. (Если файла не существует, то сначала его создаст).


===========================================================================
==================================  { 10.6 }  ==================================
==============================   I/O error handling  ===============================
=============================  Обработка ошибок  ===============================
============================================================================

Unknown words:

Interesting phares:

Termins:
Тип int  - набор целых чисел.
Тип BitmaskType - набор постоянных значений или комбинаций из них. 
		(Реализуется обычно либо через всевозможные типы целых чисел,
			std::bitset или перечисления (enumeration) 
			с дополнительными нагрузками на оператор.
		Этот тип обычно использует Конечное число
			Ненулевых Различных элементов типа BitmaskType.
		Значение 0 обычно используется для пустой битовой маски,
			в которой не заданы значения.
		Каждый представимый элемент битовой маски определяется 
			как встроенное (начиная с C++17) значение constexpr типа битовой маски. 
		Устойчивые равенства:
		X |= Y	задаёт значение Y в объекте X
		X &= ~Y	очищает (обнуляет) значение Y из объекта X.
		X & Y	ненулевой результат показывает, что Y часть объекта X
		
Enumeration declaration -  C++ C++ language Declarations 
			An enumeration is a distinct type whose value is restricted to a range of values
				 (see below for details), which may include several explicitly
				named constants ("enumerators"). 
			The values of the constants are values of an integral type
				known as the underlying type of the enumeration.
			Ex1. 
				enum Color { red, green, blue };
				Color r = red;
 
				switch(r)
				{
    					case red  : std::cout << "red\n";   break;
    					case green: std::cout << "green\n"; break;
    					case blue : std::cout << "blue\n";  break;
				}
			Ex2.
				enum Foo { a, b, c = 10, d, e = 1, f, g = f + c };
				//a = 0, b = 1, c = 10, d = 11, e = 1, f = 2, g = 12
			Ex3.
				enum color { red, yellow, green = 20, blue };
				color col = red;
				int n = blue; // n == 21
			Ex4.
				enum class Color { red, green = 20, blue };
				Color r = Color::blue;
 
				switch(r)
				{
   					case Color::red  : std::cout << "red\n";   break;
    					case Color::green: std::cout << "green\n"; break;
   					case Color::blue : std::cout << "blue\n";  break;
				}
				int n = static_cast<int>(r); // OK, n = 21

rdbuf()    -		специальная фукнция по управлению буфером потока.
	Объявление первого варианта функции :
		std::basic_streambuf<CharT, Traits>* rdbuf() const;	
	Назначение
		1)Возвращает связанный буфер потока. Если его нет, то нулевой указатель. (null pointer)
	Объявление второго варианта функции:
		std::basic_streambuf<CharT, Traits>* rdbuf( std::basic_streambuf<CharT, Traits>* sb );
	Назначение:
		1)Устанавливает для связанного потока значение sb. Ошибочное состояиие исправляется clear().
		2)Возвращает связанный буфер потока или нулевой указатель.
	
	Пример использования:
		#include <iostream>
		#include <sstream>
 
		int main()
		{
    			std::ostringstream local;
    			auto cout_buff = std::cout.rdbuf(); // save pointer to std::cout buffer
 
    			std::cout.rdbuf(local.rdbuf()); // substitute internal std::cout buffer with
        			// buffer of 'local' object
 
    			// now std::cout work with 'local' buffer
    			// you don't see this message
    			std::cout << "some message";
 
   			 // go back to old buffer
   			 std::cout.rdbuf(cout_buff);
 
   			 // you will see this message
    			std::cout << "back to default buffer\n";
 
    			// print 'local' content
   			 std::cout << "local content: " << local.str() << "\n";
		}

std::numeric_limits<T>::max
	Defined in header <limits>
	static T max() throw();
	static constexpr T max() noexcept;
	Returns the maximum finite value representable by the numeric type T. Meaningful for all bounded types.
	
	Return value
	T	std::numeric_limits<T>::max()
		/* non-specialized */	T()
		bool	true
		char	CHAR_MAX
		signed char	SCHAR_MAX
		unsigned char	UCHAR_MAX
		wchar_t	WCHAR_MAX
		char8_t (C++20)	UCHAR_MAX
		char16_t (C++11)	UINT_LEAST16_MAX
		char32_t (C++11)	UINT_LEAST32_MAX
		short	SHRT_MAX
		unsigned short	USHRT_MAX
		int	INT_MAX
		unsigned int	UINT_MAX
		long	LONG_MAX
		unsigned long	ULONG_MAX
		long long (C++11)	LLONG_MAX
		unsigned long long (C++11)	ULLONG_MAX
		float	FLT_MAX
		double	DBL_MAX
		long double	LDBL_MAX	

	Example:
	
		#include <limits>
		#include <cstddef>
		#include <iostream>
		int main()
		{
			std::cout << "short: " << std::dec << std::numeric_limits<short>::max()
              				<< " or " << std::hex << std::showbase << std::numeric_limits<short>::max() << '\n'
		              	<< "int: " << std::dec << std::numeric_limits<int>::max()
             			<< " or " << std::hex << std::numeric_limits<int>::max() << '\n'
 			<< std::dec << "streamsize: " << std::dec << std::numeric_limits<std::streamsize>::max()
             			<< " or " << std::hex << std::numeric_limits<std::streamsize>::max() << '\n'
             			<< "size_t: " << std::dec << std::numeric_limits<std::size_t>::max()
              			<< " or " << std::hex << std::numeric_limits<std::size_t>::max() << '\n"
             			<< "float: " << std::numeric_limits<float>::max()
            			<< " or " << std::hexfloat << std::numeric_limits<float>::max() << '\n'
             			<< "double: " << std::defaultfloat << std::numeric_limits<double>::max()
             			<< " or " << std::hexfloat << std::numeric_limits<double>::max() << '\n';
}

=======================================================================
К главе 10.6 Обработка ошибок
=======================================================================

Ошибки при вводе могут быть разные, опечатки, ввели не тот формат данных,
				неправильно поняли инструкцию и т.д.
Результат ввода приводит к определённому состоянию потока (stream state).
Поток istream имеет 4 состояния.
	good()   - 	Операция ввода прошла успешно    	(Пр. istream ist{...}; ist >> var;  if(ist.good()) {cout << Good!;} )
	eof()     -  	Мы достигли конца файла 		(Пр. istream ist{...};	while (!ist.eof) { ist >> var;} )
	fail()     -	При вводе случилось что-то неожиданное (Пример: ждём число, а ввели символ)
	bad()    - 	Что-то неожиданное и серьёзное случилось. (Пр.Проблема считывания с диска.)
	
	К сожалению нет четкого разделения между fail() и bad(). 
	И при составлении новых операций ввода/вывода новых типов данных, 
		каждый программист может использовать bad() и fail()  в разных случаях  по-разному.  
	Но, в основе:
Использование состояния потока istream:
	FAIL() 
		1) Неверный формат ввода простых типов
		2) Возможность ввод повторить заново
	BAD()
		1)Невозможно повторить ввод заново. 
			(Завершить попытку получить вводные данные)

--------------------------------------------------------------------------------------------------------------------------------------------------------
===================  Алгоритм ввода данных с обработкой ошибок  ============================

int i;
std::std::cin >> i;
if(!std::cin)
{
	if(std::cin.bad())  //поток повреждён; Отправляем отчет об ошибке внешней программе
	{
		throw std::runtime_error ("In function stream cin was corrupted");
	}
	if(std::cin.eof())
	{
		//Больше никаких входных данных
		//Последовательность символов правильно должна оканчиваться именно так
	}
	if(std::cin.fail()) // поток столкнулся с чем-то неожиданным
	{
		std::cin.clear();// make ready for more input
		std::cin.ignore(32767, '\n'); // очищаем поток от мусора
		//somehow recover
	}

}
std::cin.ignore(32767, '\n'); // очищаем весь мусор, который остался в потоке после извлечения



ДОПОЛНИТЕЛЬНО:
ФЛАГИ СОСТОЯНИЯ ПОТОКА:
std::ios_base::iostate     Тип BitmaskType   (enumeration?)
Определяет флаг состояния потока. (stream state flag)  
Константы
goodbit	no error
badbit	irrecoverable stream error
failbit	input/output operation failed (formatting or extraction error)
eofbit	associated input sequence has reached end-of-file
static constexpr iostate goodbit = 0;
static constexpr iostate badbit = /*implementation defined*/
static constexpr iostate failbit = /*implementation defined*/
static constexpr iostate eofbit = /*implementation defined*/
Пример использования
	void clear( std::ios_base::iostate state = std::ios_base::goodbit );
		Sets the stream error state flags by assigning them the value of state.
		By default, assigns std::ios_base::goodbit which has the effect of clearing all error state flags.
Еще пример использования clear():
	clear() without arguments can be used to unset the failbit after unexpected input; for std::cin.putback(c) see ungetc.

Установка своего флага состояния потока:
	void setstate( iostate state );
		Sets the stream error flags state in addition to currently set flags.
		Essentially calls clear(rdstate() | state). May throw an exception.
Показывает текущее состояние потока
	iostate rdstate() const;
		Returns the current stream error state.
	Пример использования:
		std::ostringstream stream;
 
  		if (stream.rdstate() == std::ios_base::goodbit) 
		{
   			 std::cout << "stream state is goodbit\n";
  		}

Пример ввода с консоли:
while( std::cout << "Please, enter a number: " && ! (std::cin >> n) )
    {
        std::cin.clear();
        std::string line;
        std::getline(std::cin, line);
        std::cout << line << "\nI am sorry, but '" << line << "' is not a number\n";
    }

Input : ctrl+Z
Stream state :
The input is fail.
The program's reached the end of input.

Input : sdfds
Stream state :
The input is good.
