#include "../../Solution/include/Solution.h"

/*
Runtime: 2 ms, faster than 69.73% of C++ online submissions for Generate Parentheses.

Memory Usage: 15.47 MB, less than 41.35% of C++ online submissions for Generate Parentheses.
*/

void recursion(std::vector<std::string>& result, int left, int right, std::string str)
{
   if (left == 0 && right == 0)
   {
      result.push_back(str);
      return;
   }

   if (left > 0)
   {
      recursion(result, left - 1, right, str + '(');
   }

   if (left < right)
   {
      recursion(result, left, right - 1, str + ')');
   }
}

std::vector<std::string> Solution::generateParenthesis(int n)
{
   std::vector<std::string> result;
   recursion(result, n, n, "");
   return result;
}