#include "Solution.h"
//number 3
//Runtime: 44 ms, faster than 35.57%
//Memory usage: 7.5 MB, less than 80.83%

int Solution::lengthOfLongestSubstring(std::string s)
{
	int counter = 0;
	int result = 0;
	int where_i_start = 0;
	int i = 0;
	std::vector<int> ascii(128, -1);
	while (i < s.length())
	{
		if (ascii[s[i]] == -1)
		{
			ascii[s[i]] = s[i];
			counter++;
			if (counter > result)
			{
				result = counter;
			}
			i++;
			continue;
		}
		else
		{
			std::fill(ascii.begin(), ascii.end(), -1);
			i = where_i_start + 1;
			where_i_start = i;
			counter = 0;
		}
	}
	return result;
}