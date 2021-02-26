#include "Solution.h"
//number 38
//Runtime: 8 ms, faster than 75.63%
//Memory usage: 6.4 MB, less than 96.32%

std::string Solution::countAndSay(int n)
{
	if (n == 1)
	{
		return "1";
	}
	if (n == 2)
	{
		return "11";
	}
	std::string str = countAndSay(n - 1), result = "";
	int i = 0;
	while (i < str.size())
	{
		int j = i;
		while (j < str.size() && str[i] == str[j])
		{
			j++;
		}
		result += std::to_string(j - i) + str[i];
		i = j;
	}
	return result;
}