#include<iostream>
#include<utility>
#include<vector>


void display_array(const std::vector<int32_t>& v, const int32_t& n)
{
	std::cout << "Array(" << n << ")\n";
		for(int j=0; j<n; j++)
		{
			std::cout << v[j] << " ";
			if((j % 10+1) == 0)
			{
				std::cout << '\n';
			}
		}
		std::cout << '\n';
}
	

void display_matrix(const std::vector<int32_t>& v, const int32_t& m, const int32_t& n)
{
	std::cout << "Matrix(" << m << ", " << n << ")\n";
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			std::cout << v[n*i+j] << " ";
			if(((n*i+j+1) % n) == 0)
			{
				std::cout << '\n';
			}
		}
	}
	
}
void initialize(std::vector<int32_t>& v, const int32_t& m, const int32_t& n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			v[i*n + j] = i*n+j+1;
		}
	}

}

int main()
{

	int32_t circle=0;
	int32_t i=0;
	int32_t j=0;
	int32_t n=4;
	int32_t m=3;
	std::vector<int32_t> matrix(m*n);
	initialize(matrix,m,n);
	display_matrix(matrix,m,n);
	std::vector<int32_t> result(m*n);
	int32_t current_index = 0;


	while(current_index < (m*n)-1)
	{
		
		for(; j<n-circle-1 && current_index<m*n-1; ++j)
		{
			result[current_index++] = matrix[i*n+j];
		}
		for(; i<m-circle-1 && current_index<m*n-1; ++i)
		{
			result[current_index++] = matrix[i*n+j];
		}
		for(;j > circle && current_index<m*n-1; --j)
		{
			result[current_index++] = matrix[i*n+j];
		}
		++circle;
		for(;i>circle && current_index<m*n-1; --i)
		{
			result[current_index++] = matrix[i*n+j];
		}
	}
		result[current_index] = matrix[i*n+j];

	display_array(result, m*n);


	return 0;

}
