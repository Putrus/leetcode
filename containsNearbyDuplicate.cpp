#include "Solution.h"
//number 219
//Runtime: 20 ms, faster than 96.27%
//Memory usage: 15.8 MB, less than 91.68%

bool Solution::containsNearbyDuplicate(std::vector<int>& nums, int k) {
	std::unordered_set<int> set;
	for (size_t i = 0; i < nums.size(); i++) {
		if (set.count(nums[i]) != 0) {
			return true;
		}
		set.insert(nums[i]);
		if (set.size() > k) {
			set.erase(nums[i - k]);
		}
	}
	return false;
}