#include "../../Solution/include/Solution.h"

/*
Runtime: 2 ms, faster than 47.87% of C++ online submissions for Remove Element.

Memory Usage: 9.18 MB, less than 38.94% of C++ online submissions for Remove Element.
*/

int Solution::removeElement(std::vector<int>& nums, int val)
{
   int limit = static_cast<int>(nums.size());
   int i = 0;
   while (i < limit)
   {
      if (nums[i] == val)
      {
         for (int j = limit - 1; j >= i; --j)
         {
            --limit;
            if (nums[j] != val && j > i)
            {
               std::swap(nums[i], nums[j]);
               break;
            }
         }
      }
      ++i;
   }
   return limit;
}