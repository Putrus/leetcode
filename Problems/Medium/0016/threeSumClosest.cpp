#include "../../Solution/include/Solution.h"

#include <algorithm>

/*
Runtime: 34 ms, faster than 93.36% of C++ online submissions for 3Sum Closest.

Memory Usage: 10.12 MB, less than 56.65% of C++ online submissions for 3Sum Closest.
*/

int Solution::threeSumClosest(std::vector<int>& nums, int target)
{
   std::vector<std::vector<int>> result;
   std::sort(nums.begin(), nums.end());
   int best = nums[0] + nums[1] + nums[2];
   for (size_t i = 0; i < nums.size(); ++i)
   {
      int j = i + 1;
      int k = nums.size() - 1;
      while (j < k)
      {
         int sum = nums[i] + nums[j] + nums[k];
         if (sum == target)
         {
            return target;
         }

         if (std::abs(target - sum) < std::abs(target - best))
         {
            best = sum;
            ++j;
         }
         else if (sum > target)
         {
            --k;
         }
         else
         {
            ++j;
         }
      }
   }
   return best;
}