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


int FindMaxRepetitionCount(const std::vector<Region>& regions);
bool operator<(const Region& r1, const Region& r2);
int main()
{
	std::map<Lang,std::string> m1 = {{Lang::IT, "hello"}, {Lang::FR, "hello1"}};
	std::map<Lang,std::string> m2 = {{Lang::DE, "hello"}, {Lang::FR, "hello1"}};
	std::cout << (m1 < m2) << std::endl ;
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

bool operator<(const Region& r1, const Region& r2)
{
	return (tie(r1.std_name,r1.parent_std_name,r1.names,r1.population)
		< tie(r2.std_name,r2.parent_std_name,r2.names,r2.population)
		);
}



int FindMaxRepetitionCount(const std::vector<Region>& regions)
{
	int max = 0;
	std::map<Region, int32_t> count_region;
	for(const auto& r : regions)
	{
		max = std::max(max,++count_region[r]);
	}
	return max;
 
}
