#include "../../Solution/include/Solution.h"

/*
Runtime: 63 ms, faster than 93.89% of C++ online submissions for Container With Most Water.

Memory Usage: 59 MB, less than 71.04% of C++ online submissions for Container With Most Water.
*/

int Solution::maxArea(std::vector<int>& height)
{
   int max = 0;
   //brute force
   /*for (size_t i = 0; i < height.size(); ++i)
   {
      for (size_t j = i + 1; j < height.size(); ++j)
      {
         int water = (j - i) * std::min(height[i], height[j]);
         if (water > max)
         {
            max = water;
         }
      }
   }*/

   size_t i = 0;
   size_t j = height.size() - 1;
   while (i != j)
   {
      int water = (j - i) * std::min(height[i], height[j]);
      if (water > max)
      {
         max = water;
      }

      if (height[i] < height[j])
      {
         ++i;
      }
      else
      {
         --j;
      }
   }
   return max;
}