#include "Solution.h"
//number 11
//Runtime: 16 ms, faster than 95.99%
//Memory usage: 17.8 MB, less than 66.79%

int Solution::maxArea(std::vector<int>& height)
{
	//brute force, ale za wolne dla leetcode
	/*int max = 0;

	for (int i = 0; i < height.size(); i++)
	{
		for (int j = i+1; j < height.size(); j++)
		{
			if (height[i] < height[j])
			{
				if (height[i] * (j - i) > max)
				{
					max = height[i] * (j - i);
				}
			}
			else
			{
				if (height[j] * (j - i) > max)
				{
					max = height[j] * (j - i);
				}
			}
		}



	}
	return max;*/

	//lepszy algorytm

	int max = 0;

	int i = 0;
	int j = height.size() - 1;
	while (i != j)
	{
		if (height[i] <= height[j])
		{
			if (height[i] * (j - i) > max)
			{
				max = height[i] * (j - i);
			}
			i++;
		}
		else
		{
			if (height[j] * (j - i) > max)
			{
				max = height[j] * (j - i);
			}
			j--;
		}
	}
	return max;
}