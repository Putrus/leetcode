#include "../../Solution/include/Solution.h"

/*
Runtime: 355 ms, faster than 33.65% of C++ online submissions for Two Sum.

Memory Usage: 10 MB, less than 94.97% of C++ online submissions for Two Sum.
*/

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
   for (size_t i = 0; i < nums.size(); ++i) {
      for (size_t j = i + 1; j < nums.size(); ++j) {
         if (nums[i] + nums[j] == target) {
            return { static_cast<int>(i), static_cast<int>(j) };
         }
      }
   }
   return {};
}