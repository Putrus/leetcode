#include <iostream>
#include "Solution.h"

int main()
{
	Solution solution;
	std::vector<int> nums = { -10, -3, 0, 5, 9 };
	std::vector<int> nums2 = { 0, 1, 2, 3, 4, 5 };
	std::vector<int> num3 = { 1,3 };
	//3,1,5,0,2,4

	std::cout << solution.climbStairs(2);
	return 0;
}