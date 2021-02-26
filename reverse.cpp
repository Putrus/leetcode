#include "Solution.h"
//number 7
//to improve



int Solution::reverse(int x) {
	int result = 0;
	int ok = 0;
	int temp_x = -1 * x;
	std::string str_x = std::to_string(temp_x);
	std::string temp = "";

	for (int i = (str_x.length() - 1); i >= 0; i--)
	{
		if (str_x[i] == '0' && ok == 0)
		{
			continue;
		}
		ok = 1;
		temp.push_back(str_x[i]);
	}
	result = std::stoi(temp);
	result *= x / abs(x);
	if ((result < 0 && x > 0) || (result > 0 && x < 0))
	{
		return 0;
	}
	return result;
}