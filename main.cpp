#include <iostream>
#include "Solution.h"


int main()
{
	Solution solution;

	
	std::vector<int> k;
	k.push_back(3);
	k.push_back(2);
	k.push_back(2);
	k.push_back(3);
	std::cout << solution.removeElement(k, 3);

	
	

	
	return 0;
}