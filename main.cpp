#include <iostream>
#include "Solution.h"


int main()
{
	Solution solution;

	std::vector<std::string> str;
	str.push_back("c");
	str.push_back("c");
	//str.push_back("float");
	std::cout << "\n" << solution.longestCommonPrefix(str);
	

	
}