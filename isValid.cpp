#include "Solution.h"
//number 20
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 6.3 MB, less than 44.87%

bool Solution::isValid(std::string s)
{
	std::stack<char> stack;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
		{
			stack.push(s[i]);
		}
		else if (s[i] == ')')
		{
			if (stack.empty() || stack.top() != '(')
			{
				return false;
			}
			stack.pop();
		}
		else if (s[i] == '}')
		{
			if (stack.empty() || stack.top() != '{')
			{
				return false;
			}
			stack.pop();
		}
		else if (s[i] == ']')
		{
			if (stack.empty() || stack.top() != '[')
			{
				return false;
			}
			stack.pop();
		}

	}
	return stack.empty();

}