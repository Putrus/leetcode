#include "Solution.h"
//number 18
//not finished


std::vector<std::vector<int>> Solution::fourSum(std::vector<int>& nums, int target) {
	std::vector<std::vector<int>> result;
	std::sort(nums.begin(), nums.end());
	if (nums.size() >= 4) {
		for (size_t i = 0; i < nums.size() - 3; i++) {
			for (size_t j = i + 1; j < nums.size() - 2; j++) {
				for (size_t k = j + 1; k < nums.size() - 1; k++) {
					for (size_t l = k + 1; l < nums.size(); l++) {
						if (nums[i] + nums[j] + nums[k] + nums[l] == target) {
							std::vector<int> a = { nums[i], nums[j], nums[k], nums[l] };
							bool ok = true;
							for (size_t m = 0; m < result.size(); m++) {
								if (result[m] == a) {
									ok = false;
									break;
								}
							}
							if (ok) {
								result.push_back(a);
							}
						}
					}
				}
			}
		}
	}
	return result;
}