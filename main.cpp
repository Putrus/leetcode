#include <iostream>
#include "Solution.h"

int main()
{
	Solution solution;
	std::vector<std::vector<int>> k = { {0,0,0},{0,1,0},{0,0,0} };
	std::vector<std::vector<int>> l = { {1,0} };
	std::cout << solution.uniquePathsWithObstacles(k);
	return 0;
}