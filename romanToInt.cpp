#include "Solution.h"
//number 13
//Runtime: 8 ms, faster than 76.58%
//Memory usage: 6 MB, less than 86.04%


int Solution::romanToInt(std::string s)
{
	int result = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i != s.size() - 1)
		{
			if (s[i] == 'I' && s[i + 1] == 'V')
			{
				result += 4;
				i++;
				continue;
			}
			if (s[i] == 'I' && s[i + 1] == 'X')
			{
				result += 9;
				i++;
				continue;
			}
			if (s[i] == 'X' && s[i + 1] == 'L')
			{
				result += 40;
				i++;
				continue;
			}
			if (s[i] == 'X' && s[i + 1] == 'C')
			{
				result += 90;
				i++;
				continue;
			}
			if (s[i] == 'C' && s[i + 1] == 'D')
			{
				result += 400;
				i++;
				continue;
			}
			if (s[i] == 'C' && s[i + 1] == 'M')
			{
				result += 900;
				i++;
				continue;
			}
		}
		if (s[i] == 'I')
		{
			result += 1;
			continue;
		}
		if (s[i] == 'V')
		{
			result += 5;
			continue;
		}
		if (s[i] == 'X')
		{
			result += 10;
		}
		if (s[i] == 'L')
		{
			result += 50;
			continue;
		}
		if (s[i] == 'C')
		{
			result += 100;
			continue;
		}
		if (s[i] == 'D')
		{
			result += 500;
			continue;
		}
		if (s[i] == 'M')
		{
			result += 1000;
			continue;
		}

	}
	return result;
}