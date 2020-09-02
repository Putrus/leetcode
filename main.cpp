#include <iostream>
#include "Solution.h"


int main()
{
	Solution solution;

	
	std::vector<int> height;
	height.push_back(1);
	height.push_back(3);
	height.push_back(5);
	height.push_back(6);
	std::cout << solution.searchInsert(height, 2);

	
	

	
	return 0;
}