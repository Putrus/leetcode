#include "Solution.h"
//number 217
//Runtime: 20 ms, faster than 95.13%
//Memory usage: 15.5 MB, less than 94.50%

bool Solution::containsDuplicate(std::vector<int>& nums) {
	if (nums.size() > 1) {
		std::sort(nums.begin(), nums.end());
		for (size_t i = 0; i < nums.size() - 1; i ++) {
			if (nums[i] == nums[i + 1]) {
				return true;
			}
		}
	}
	return false;
}