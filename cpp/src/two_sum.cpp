#include "../inc/solution.h"
#include <unordered_map>
#include <vector>

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
   std::unordered_map<int, int> map;
   for (int i = 0; i < nums.size(); ++i)
   {
      int complement = target - nums[i];
      if (map.count(complement))
      {
         return {map[complement], i};
      }
      map[nums[i]] = i;
   }
   return {};
}

#include <gtest/gtest.h>

TEST(TwoSumTest, Example1)
{
   std::vector<int> nums = { 2, 7, 11, 15 };
   int target = 9;
   auto result = Solution().twoSum(nums, target);
   EXPECT_EQ(result, (std::vector<int>{ 0, 1 }));
}

TEST(TwoSumTest, Example2)
{
   std::vector<int> nums = { 3, 2, 4 };
   int target = 6;
   auto result = Solution().twoSum(nums, target);
   EXPECT_EQ(result, (std::vector<int>{ 1, 2 }));
}

TEST(TwoSumTest, Example3)
{
   std::vector<int> nums = { 3, 3 };
   int target = 6;
   auto result = Solution().twoSum(nums, target);
   EXPECT_EQ(result, (std::vector<int>{ 0, 1 }));
}