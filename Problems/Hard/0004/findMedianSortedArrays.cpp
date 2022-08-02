#include "../../Solution/include/Solution.h"

#include <algorithm>

/*
Runtime: 31 ms, faster than 93.06% of C++ online submissions for Median of Two Sorted Arrays.

Memory Usage: 89.7 MB, less than 34.06% of C++ online submissions for Median of Two Sorted Arrays.
*/

double Solution::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) 
{
   nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
   std::sort(nums1.begin(), nums1.end());
   return (nums1.size() % 2 == 0) ? (nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2.0 : nums1[nums1.size() / 2];
}