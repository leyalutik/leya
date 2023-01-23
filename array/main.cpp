#include <iostream>
#include <vector>

using namespace std;

template <size_t n, size_t m>
void printArray(int (&a)[n][m]) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
		cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
vector<int> spiralOrder(vector<vector<int>>& matrix) {

	std::vector<int> answer; 

	int32_t upper_row = 0;
	int32_t lower_row = matrix.size()-1;
	// column_boundaries
	int32_t left_column = 0;
	int32_t right_column = matrix[0].size()-1;

	while( (upper_row <= lower_row) && (left_column <= right_column))
	{
		int32_t i,j;
		// move along upper row

		i = upper_row;
		for(j=left_column; j<=right_column; ++j)
		{
			answer.push_back(matrix[i][j]) ;
		}
		++upper_row;

		//move along right column
		j = right_column;
		for(i=upper_row; i<=lower_row; ++i)
		{
			answer.push_back(matrix[i][j]);
		}
		--right_column;
		if((upper_row <= lower_row) && (left_column <= right_column))
		{
			//move along lower row
			i = lower_row;
			for(j=right_column; j>= left_column; --j)
			{
				answer.push_back(matrix[i][j]);
			}
			--lower_row;

			//move along left column
			j = left_column;
			for(i=lower_row; i >= upper_row; --i)
			{
				answer.push_back(matrix[i][j]);
			}
			++left_column;
		}
	}
	return answer;
}

int main() {
    //Dimension M x N
    int32_t M = 3;
    int32_t N = 4;
    cout << "Example I:" << std::endl;
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printArray(a);
  //Spiral Matrix

  //row boundaries

    int32_t upper_row = 0;
    int32_t lower_row = M-1;
    // column_boundaries
    int32_t left_column = 0;
    int32_t right_column = N-1;

    while( (upper_row <= lower_row) && (left_column <= right_column))
    {
	    int32_t i,j;
	    // move along upper row
	    i = upper_row;
	    for(j=left_column; j<=right_column; ++j)
	    {
		    cout << a[i][j] << " ";
	    }
	    ++upper_row;

	    //move along right column
	    j = right_column;
	    for(i=upper_row; i<=lower_row; ++i)
	    {
		    std::cout << a[i][j] << " ";
	    }
	    --right_column;
	    if( (upper_row <= lower_row) && (left_column <= right_column))
	    {

		    //move along lower row
		    i = lower_row;
		    for(j=right_column; j>= left_column; --j)
		    {
			    std::cout << a[i][j] << " ";
		    }
		    --lower_row;

		    //move along left column
		    j = left_column;
		    for(i=lower_row; i >= upper_row; --i)
		    {
			    std::cout << a[i][j] << " ";
		    }
		    ++left_column;
	    }
  }
}
