#include "../../Solution/include/Solution.h"

#include <algorithm>
#include <set>

/*
Runtime: 1023 ms, faster than 30.53% of C++ online submissions for 3Sum.

Memory Usage: 191.68 MB, less than 7.49% of C++ online submissions for 3Sum.
*/

std::vector<std::vector<int>> Solution::threeSum(std::vector<int>& nums)
{
   std::vector<std::vector<int>> result;
   std::set<std::vector<int>> set;
   std::sort(nums.begin(), nums.end());
   for (size_t i = 0; i < nums.size(); ++i)
   {
      int j = i + 1;
      int k = nums.size() - 1;
      while (j < k)
      {
         int sum = nums[i] + nums[j] + nums[k];
         if (sum == 0)
         {
            std::vector<int> resultSum = { nums[i], nums[j], nums[k] };
            set.insert(resultSum);
            --k;
            ++j;
         }
         else if (sum > 0)
         {
            --k;
         }
         else
         {
            ++j;
         }
      }
   }

   for (const auto& s : set)
   {
      result.push_back(s);
   }
   return result;
}