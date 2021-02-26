#include "Solution.h"
//number 263
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 5.9 MB, less than 77.70%


bool Solution::isUgly(int num) {
	while (num > 1) {
		if (num % 2 == 0) {
			num /= 2;
			continue;
		}
		else if (num % 3 == 0) {
			num /= 3;
			continue;
		}
		else if (num % 5 == 0) {
			num /= 5;
			continue;
		}
		else {
			break;
		}
	}
	if (num == 1) {
		return true;
	}
	return false;
}