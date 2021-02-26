#include "Solution.h"
//number 66
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 8.8 MB, less than 83.73%

std::vector<int> Solution::plusOne(std::vector<int>& digits) {

	if (digits[digits.size() - 1] == 9)
	{
		int i = digits.size() - 1;
		while (digits[i] == 9 && i != 0)
		{
			digits[i] = 0;
			i--;
		}
		if (digits[i] == 9)
		{
			digits[i] = 1;
			digits.push_back(0);
		}
		else
		{
			digits[i] += 1;
		}

	}
	else
	{
		digits[digits.size() - 1] += 1;
	}
	return digits;
}