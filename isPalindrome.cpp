#include "Solution.h"
//number 9
//Runtime: 16 ms, faster than 39.45%
//Memory usage: 5.9 MB, less than 58.54%

bool Solution::isPalindrome(int x) {

	int i = 1000000000;
	int j = 10;
	int tempLeft = 0;
	int tempRight = 0;
	if (x < 0)
	{
		return false;
	}
	else if (x == 0)
	{
		return true;
	}
	else if (x % 10 == 0)
	{
		return false;
	}
	else
	{
		while (i >= j)
		{
			if (x % i == x)
			{
				i /= 10;
				continue;
			}
			else
			{

				if (i == 1000000000)
				{
					tempLeft = ((x - x % i) / i);
				}
				else
				{
					tempLeft = ((x - x % i - (x - x % (i * 10))) / i);
				}
				tempRight = ((x % j) - (x % (j / 10))) / (j / 10);
				if (tempLeft == tempRight)
				{
					i /= 10;
					j *= 10;
					continue;
				}
				else
				{
					return false;
				}

			}

		}
	}
	return true;
}