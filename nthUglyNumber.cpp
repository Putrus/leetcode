#include "Solution.h"
//number 264
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 9.5 MB, less than 43.49%

int Solution::nthUglyNumber(int n) {
	
	std::vector<int> uglyNumbers;
	int num2 = 2, num3 = 3, num5 = 5;
	uglyNumbers.push_back(1);
	int i2 = 0, i3 = 0, i5 = 3;
	int num = 0;
	for (int i = 1; i < n; i++) {
		num = std::min(num2, std::min(num3, num5));
		uglyNumbers.push_back(num);
		if (num == num2) {
			i2++;
			num2 = uglyNumbers[i2] * 2;
		}
		if (num == num3) {
			i3++;
			num3 = uglyNumbers[i3] * 3;
		}
		if (num == num5) {
			i5++;
			num5 = uglyNumbers[i5] * 5;
		}

	}
	return num;
}