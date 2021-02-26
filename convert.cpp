#include "Solution.h"
//number 6
//Runtime: 8 ms, faster than 89.14%
//Memory usage: 8.1 MB, less than 94.33%


std::string Solution::convert(std::string s, int numRows)
{
	std::string result;
	result = "";
	//zmienna ktora mowi gdzie sie aktualnie znajduje
	int place = 0;
	int temp = 0;
	if (numRows == 1)
	{
		return s;
	}
	else
	{
		for (int i = 0; i < numRows; i++)
		{
			if (i == 0 || i == (numRows)-1)
			{
				while (place < s.length())
				{
					result.push_back(s[place]);
					place += (2 * (numRows - 1));
				}
			}
			else
			{
				while (place < s.length())
				{
					result.push_back(s[place]);
					if ((place + (2 * (numRows - 1)) - temp) < s.length())
					{
						result.push_back(s[place + (2 * (numRows - 1)) - temp]);
					}
					place += (2 * (numRows - 1));
				}
			}
			place = i + 1;
			temp += 2;
		}
	}
	return result;
}