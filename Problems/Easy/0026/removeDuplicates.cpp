#include "../../Solution/include/Solution.h"

#include <algorithm>

/*
Runtime: 5 ms, faster than 84.34% of C++ online submissions for Remove Duplicates from Sorted Array.

Memory Usage: 18.72 MB, less than 54.45% of C++ online submissions for Remove Duplicates from Sorted Array.
*/

int Solution::removeDuplicates(std::vector<int>& nums)
{
   nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
   return nums.size();
}