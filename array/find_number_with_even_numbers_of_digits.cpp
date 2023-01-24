#include <iostream>
#include <vector>

using namespace std;

template <size_t n, size_t m>
void print2DArray(int (&a)[n][m]) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
		cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

template <size_t n>
void printArray(const int (&a)[n])
{
	std::cout << "\n";
	for(size_t i=0; i<n; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
}

int main() 
{
	int a[3] = {0,0,0};
	printArray(a);	
	int b[3] = {};
	printArray(b);	
	
	std::cout << "size of a[] = " << sizeof(a) << "\n";;
	return 0;
}
