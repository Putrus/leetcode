#include <iostream>
#include "Solution.h"


int main()
{
	Solution solution;

	
	std::vector<int> height;
	height.push_back(-1);
	height.push_back(0);
	height.push_back(1);
	height.push_back(2);
	height.push_back(-1);
	height.push_back(-4);
	
	std::vector<std::vector<int>> test = solution.threeSum(height);

	
	

	/*for (int i = 0; i < result.size(); i++)
	{
		for (int j = 0; j < result[i].size(); j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}
	*/
	return 0;
}