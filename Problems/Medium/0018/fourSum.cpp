#include "../../Solution/include/Solution.h"

/*
Runtime: 734 ms, faster than 5.82% of C++ online submissions for 4Sum.

Memory Usage: 49.71 MB, less than 20.14% of C++ online submissions for 4Sum.
*/

#include <algorithm>
#include <set>

std::vector<std::vector<int>> Solution::fourSum(std::vector<int>& nums, int target)
{
   std::vector<std::vector<int>> result;
   std::set<std::vector<int>> set;
   std::sort(nums.begin(), nums.end());

   for (int i = 0; i < static_cast<int>(nums.size()); ++i)
   {
      for (int j = i + 1; j < static_cast<int>(nums.size()); ++j)
      {
         int l = j + 1;
         int r = nums.size() - 1;
         while (l < r)
         {
            long long sum = static_cast<long long>(nums[i]) +
               static_cast<long long>(nums[j]) +
               static_cast<long long>(nums[l]) +
               static_cast<long long>(nums[r]);
            if (sum == target)
            {
               set.insert({ nums[i], nums[j], nums[l], nums[r] });
               --r;
               ++l;
            }
            else if (sum > target)
            {
               --r;
            }
            else
            {
               ++l;
            }
         }
      }
   }

   for (const auto& s : set)
   {
      result.push_back(s);
   }
   return result;
}