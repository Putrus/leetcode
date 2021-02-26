#include "Solution.h"
//number 4
//Runtime: 44 ms, faster than 35.57%
//Memory usage: 7.5 MB, less than 80.83%

float Solution::findMedianSortedArrays(std::vector<int> nums1, std::vector <int> nums2)
{
	if (nums1.size() != 0 || nums2.size() != 0)
	{
		nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
		sort(nums1.begin(), nums1.end());

		if (nums1.size() % 2 != 0)
		{
			return float(nums1[nums1.size() / 2]);
		}
		else
		{
			return (float(nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2);
		}
	}
	return 0;
}