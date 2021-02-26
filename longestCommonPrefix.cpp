#include "Solution.h"
//number 14
//Runtime: 4 ms, faster than 83.60%
//Memory usage: 9.2 MB, less than 80.07%


std::string Solution::longestCommonPrefix(std::vector<std::string>& strs)
{
	std::string result = "";
	if (strs.size() > 1 && strs[0] != "")
	{
		int charN = 0;
		bool ok = true;

		while (ok)
		{
			for (int i = 1; i < strs.size(); i++)
			{
				if (strs[0][charN] != strs[i][charN] || strs[0].length() <= charN || strs[i].length() <= charN)
				{
					ok = false;
					break;
				}
			}
			if (ok == false)
			{
				break;
			}
			result.push_back(strs[0][charN]);
			charN++;
		}
	}
	else if (strs.size() == 1)
	{
		result = strs[0];
	}
	return result;
}