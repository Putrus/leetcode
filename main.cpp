#include <iostream>
#include "Solution.h"


int main()
{
	Solution solution;

	std::vector<int> v = {-1,2,1,-4};
	std::vector<std::string> k = solution.letterCombinations("23");
	std::cout << k[2];

	
	

	
	return 0;
}