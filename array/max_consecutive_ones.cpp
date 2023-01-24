/*
Max Consecutive Ones

Solution
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 

Constraints:

1 <= nums.length <= 105
ums[i] is either 0 or 1./
*/

#include <iostream>
#include <vector>


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int32_t Max = 0;
        int32_t temp_max = 0;
        for(auto& n:nums)
        {
            if(n == 1)
            {
                ++temp_max;
            }
            else
            {
                if(temp_max > Max)
                {
                    Max = temp_max;
                }
                temp_max = 0;
                
            }  
        }
        if(temp_max > Max)
        {
            Max = temp_max;
        }
        
        return Max;
    }
};

int main() 
{
	return 0;
}
