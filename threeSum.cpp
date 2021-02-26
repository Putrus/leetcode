#include "Solution.h"
//number 15
//Runtime: 88 ms, faster than 65.88%
//Memory usage: 19.9 MB, less than 89.41%


std::vector<std::vector<int>> Solution::threeSum(std::vector<int>& nums)
{
	//brute force
	/*std::vector<std::vector<int>> result;
	bool ok = true;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i+1; j < nums.size(); j++)
		{
			for (int k = j + 1; k < nums.size(); k++)
			{
				if (nums[i] + nums[j] + nums[k] == 0)
				{
					std::vector<int> temp_result;
					temp_result.push_back(nums[i]);
					temp_result.push_back(nums[j]);
					temp_result.push_back(nums[k]);
					std::sort(temp_result.begin(), temp_result.end());
					for (int n = 0; n < result.size(); n++)
					{
						if (temp_result[0] == result[n][0] && temp_result[1] == result[n][1] && temp_result[2] == result[n][2])
						{
							ok = false;
							break;
						}
						ok = true;
					}
					if (ok == true)
					{
						result.push_back(temp_result);
						ok = false;
					}
				}
			}
		}
	}
	return result;*/
	std::vector<std::vector<int>> arr;
	int n = nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n - 2; i++)
	{
		if (i > 0 && nums[i - 1] == nums[i])
		{
			continue;
		}
		int j = i + 1;
		int k = n - 1;
		while (j < k)
		{
			int sum = nums[j] + nums[k];
			if (sum == -nums[i])
			{
				arr.push_back({ nums[i],nums[j],nums[k] });
				while (j < k && nums[j] == nums[j + 1]) j++;
				while (j < k && nums[k] == nums[k - 1]) k--;
				j++, k--;
			}
			else if (sum > -nums[i])
			{
				k--;
			}
			else
			{
				j++;
			}
		}
	}
	return arr;
}