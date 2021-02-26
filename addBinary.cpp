#include "Solution.h"
//number 67
//Runtime: 4 ms, faster than 67.09%
//Memory usage: 6.4 MB, less than 70.91%

std::string Solution::addBinary(std::string a, std::string b) {

	int diff = abs(int(a.length() - b.length()));
	if (a.length() > b.length())
	{
		for (int i = 0; i < diff; i++)
		{
			b.insert(b.begin() + i, '0');
		}
	}
	else {
		for (int i = 0; i < diff; i++)
		{
			a.insert(a.begin() + i, '0');
		}
	}
	std::string result = "";
	char rest = '0';
	for (int i = a.length() - 1; i >= 0; i--)
	{
		if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
		{
			if (rest == '0')
			{
				result.insert(result.begin(), '1');
				rest = '0';
			}
			else {
				result.insert(result.begin(), '0');
				rest = '1';
			}
		}
		else if (a[i] == '0' && b[i] == '0')
		{
			if (rest == '0')
			{
				result.insert(result.begin(), '0');
				rest = '0';
			}
			else {
				result.insert(result.begin(), '1');
				rest = '0';
			}
		}
		else {
			if (rest == '0')
			{
				result.insert(result.begin(), '0');
				rest = '1';
			}
			else {
				result.insert(result.begin(), '1');
				rest = '1';
			}
		}
	}
	if (rest == '1')
	{
		result.insert(result.begin(), rest);
	}

	return result;
}