#include "Solution.h"
//number 26
//Runtime: 136 ms, faster than 18.76%
//Memory usage: 13.7 MB, less than 50.46%


int Solution::removeDuplicates(std::vector<int>& nums)
{
	if (nums.size() != 0)
	{
		for (int i = 0; i < nums.size() - 1; i++)
		{
			while (i != nums.size() - 1 && nums[i] == nums[i + 1])
			{
				nums.erase(nums.begin() + i + 1);
			}

		}
	}
	return nums.size();
}