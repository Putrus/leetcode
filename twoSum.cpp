#include "Solution.h"
//number 1
//Runtime: 4 ms, faster than 97.18%
//Memory usage: 8.8 MB, less than 96.92%


std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
	for (int i = 0; i < nums.size() - 1; i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if ((nums[i] + nums[j]) == target)
			{
				std::cout << "Result = [" << i << ", " << j << "]\n";
				return { i,j };
			}
		}
	}
	return {};
}