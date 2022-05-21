//"Напишите функцию FindMaxRepetitionCount, принимающую базу регионов и определяющую, какое максимальное количество повторов (число вхождений одного и того же элемента) она содержит. Две записи (объекты типа Region) считаются различными, если они отличаются хотя бы одним полем. " 


#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<tuple>

enum class Lang {
  DE, FR, IT
};

struct Region {
	std::string std_name;
	std::string parent_std_name;
	std::map<Lang, std::string> names;
 	int64_t population;
};

bool operator==(const std::map<Lang, std::string>& m1, const std::map<std::string,std::string>& m2);
int FindMaxRepetitionCount(const std::vector<Region>& regions);

int main()
{
//	std::map<Lang,std::string> m1;// = {{Lang::IT, "hello"}, {Lang::FR, "hello1"}};
//	std::map<Lang,std::string> m2;// = {{Lang::DE, "hello"}, {Lang::FR, "hello1"}};
//	std::cout << (m1 == m2) << std::endl ;
	std::cout << FindMaxRepetitionCount({
      {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
      }, {
          "Russia",
          "Eurasia",
          {{Lang::DE, "Russland"}, {Lang::FR, "Russie"}, {Lang::IT, "Russia"}},
          89
      }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
      }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
      }, {
          "Russia",
          "Eurasia",
          {{Lang::DE, "Russland"}, {Lang::FR, "Russie"}, {Lang::IT, "Russia"}},
          89
      },
  }) << std::endl;
  
	std::cout << FindMaxRepetitionCount({
      {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
      }, {
          "Russia",
          "Eurasia",
          {{Lang::DE, "Russland"}, {Lang::FR, "Russie"}, {Lang::IT, "Russia"}},
          89
      }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou deux"}, {Lang::IT, "Mosca"}},
          89
      }, {
          "Moscow",
          "Toulouse",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          89
      }, {
          "Moscow",
          "Russia",
          {{Lang::DE, "Moskau"}, {Lang::FR, "Moscou"}, {Lang::IT, "Mosca"}},
          31
      },
  }) << std::endl;

	return 0;

}


bool operator==(const std::map<Lang, std::string>& m1, const std::map<Lang,std::string>& m2)
{
	for(auto& key : { Lang::DE, Lang::FR, Lang::IT})
	{
		if(m1.count(key) != m2.count(key))
		{
			return 0;
		}
		if(m1.at(key) != m2.at(key))
		{
			return 0;
		}
	}
	return (m1.size() == m2.size());
}

int FindMaxRepetitionCount(const std::vector<Region>& regions)
{
	if(regions.size() == 0)
	{
		return 0;
	}
	int32_t max = 1;
	int32_t count = 0;

	for(const auto& lev1:regions)
	{
		for(const auto& lev2:regions)
		{	
				if(lev2.names == lev1.names)
				{
					auto var1 = tie(
							lev1.std_name, lev1.parent_std_name,
							lev1.population);
					auto var2 = tie(lev2.std_name, lev2.parent_std_name,
							lev2.population);
					if(var1 == var2)
					{
						++count;
					}

				}
		}
		if(count > max)
		{
			max = count;
		}
		count = 0;
	}
	return max;
 
}
