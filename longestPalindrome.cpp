#include "Solution.h"
//number 5
//Runtime: 20 ms, faster than 83.07%
//Memory usage: 7.1 MB, less than 81.84%

std::string Solution::longestPalindrome(std::string s)
{
	if (s.length() <= 1000)
	{
		int len = s.length();
		int max = 1;
		int l, r, start = 0;
		std::string result = "";
		for (int i = 1; i < len; i++)
		{
			l = i - 1;
			r = i;
			while (l >= 0 && r < len && s[l] == s[r])
			{
				if (r - l + 1 > max)
				{
					max = r - l + 1;
					start = l;
				}
				l--;
				r++;
			}
			l = i - 1;
			r = i + 1;
			while (l >= 0 && r < len && s[l] == s[r]) {
				if (r - l + 1 > max) {
					max = r - l + 1;
					start = l;
				}
				l--;
				r++;
			}
		}
		for (int k = start; k < start + max; k++)
		{
			result.push_back(s[k]);
		}
		return result;
	}
	return "";
}