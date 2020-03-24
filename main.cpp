#include <iostream>
#include "Solution.h"


int main()
{
	Solution solution;
	std::vector<int> nums1{ 1,2 };
	std::vector<int> nums2{ 3,4 };
	float x = solution.findMedianSortedArrays(nums1, nums2);
	std::cout << x;

	std::cout << solution.longestPalindrome("kajak");
}