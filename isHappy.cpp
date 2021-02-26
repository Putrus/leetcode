#include "Solution.h"
//number 202
//Runtime: 4 ms, faster than 52.62%
//Memory usage: 6.1 MB, less than 71.28%

bool Solution::isHappy(int n) {
	std::vector<int> nums;
	int sum = n;
	while (true) {
		std::string number = std::to_string(sum);
		sum = 0;
		for (int i = 0; i < number.length(); i++) {
			sum += (number[i] % 48) * (number[i] % 48);
		}
		if (sum == 1) {
			return true;
		}
		if (std::find(nums.begin(), nums.end(), sum) != nums.end()) {
			return false;
		}
		nums.push_back(sum);
	}
	return false;
}