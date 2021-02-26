#include "Solution.h"
//number 198
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 7.7 MB, less than 62.98%

int Solution::rob(std::vector<int>& nums)
{
	if (nums.size() == 0)
	{
		return 0;
	}
	if (nums.size() == 1)
	{
		return nums[0];
	}
	if (nums.size() == 2)
	{
		return std::max(nums[0], nums[1]);
	}
	std::vector<int> temp(nums.size(), 0);

	temp[0] = nums[0];
	temp[1] = std::max(nums[0], nums[1]);
	for (int i = 2; i < nums.size(); i++)
	{
		temp[i] = std::max(nums[i] + temp[i - 2], temp[i - 1]);
	}
	return temp[nums.size() - 1];

}