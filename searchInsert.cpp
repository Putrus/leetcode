#include "Solution.h"
//number 35
//Runtime: 8 ms, faster than 43.92%
//Memory usage: 9.7 MB, less than 71.80%


int Solution::searchInsert(std::vector<int>& nums, int target)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target)
		{
			return i;
		}
		if (nums[i] > target)
		{
			return i;
		}
	}
	return nums.size();
}