#include <iostream>
#include "Solution.h"


int main()
{
	Solution solution;

	
	std::vector<int> height;
	height.push_back(1);
	height.push_back(2);
	height.push_back(2);
	std::cout << solution.removeDuplicates(height);

	
	

	
	return 0;
}