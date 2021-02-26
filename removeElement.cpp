#include "Solution.h"
//number 27
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 8.6 MB, less than 92.80%


int Solution::removeElement(std::vector<int>& nums, int val) {
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == val)
		{
			nums.erase(nums.begin() + i);
			i = -1;
		}
	}
	return (int)nums.size();
}