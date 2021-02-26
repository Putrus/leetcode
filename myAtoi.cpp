#include "Solution.h"
//number 8
//Runtime: 4 ms, faster than 66.05%
//Memory usage: 7 MB, less than 81.75%



int Solution::myAtoi(std::string str) {
	int result = 0;
	int sign = 1;
	bool is_number = false;
	for (char& c : str)
	{

		if (c == ' ' && is_number == false)
		{
			continue;
		}
		else if (!((c >= 48 && c <= 57) || c == 45 || c == '+') && is_number == false)
		{
			return 0;
		}
		else if (c == '-' && is_number == false)
		{
			sign = -1;
			is_number = true;
		}
		else if (c == '+' && is_number == false)
		{
			sign = 1;
			is_number = true;
		}
		else if ((!((c >= 48 && c <= 57))) && is_number == true)
		{
			break;
		}
		else if ((c >= 48 && c <= 57))
		{
			is_number = true;

			if (sign * result > 214748364)
			{
				if (sign == -1)
				{
					return (-2147483647) - 1;
				}
				return  2147483647;
			}
			else if (sign * result == 214748364)
			{
				if (c >= '7' && sign == 1)
				{
					return 2147483647;
				}
				else if (c >= '8' && sign == -1)
				{
					return (-2147483647) - 1;
				}
			}
			result = result * 10 + sign * (c - 48);
		}

		if (result > 0 && sign == -1)
		{
			return (-2147483647) - 1;
		}
		if (result < 0 && sign == 1)
		{
			return 2147483647;
		}
	}
	return result;
}