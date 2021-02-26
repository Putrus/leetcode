#include "Solution.h"
//number 58
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 6.4 MB, less than 78.68%

int Solution::lengthOfLastWord(std::string s)
{
	int spacebars = 0;
	int j = s.length() - 1;
	while (j >= 0 && s[j] == ' ')
	{
		spacebars++;
		if (j == 0)
		{
			return 0;
		}
		j--;
	}
	std::cout << "spacebars:" << spacebars << "\n";
	for (int i = s.length() - 1 - spacebars; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			return s.length() - i - 1 - spacebars;
		}
	}
	return s.length() - spacebars;
}