#include "Solution.h"
//number 16
//Runtime: 24 ms, faster than 25.55%
//Memory usage: 9.7 MB, less than 94.01%


int Solution::threeSumClosest(std::vector<int>& nums, int target) {
	int difference = INT_MAX;
	int n = nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n && difference != 0; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			int complement = target - nums[i] - nums[j];
			auto it = upper_bound(nums.begin() + j + 1, nums.end(), complement);
			int higher = it - nums.begin();
			int lower = higher - 1;
			if (higher < n && abs(complement - nums[higher]) < abs(difference)) {
				difference = complement - nums[higher];
			}
			if (lower > j&& abs(complement - nums[lower]) < abs(difference)) {
				difference = complement - nums[lower];
			}
		}
	}
	return target - difference;
}