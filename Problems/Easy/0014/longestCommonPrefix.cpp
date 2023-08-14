#include "../../Solution/include/Solution.h"

/*
Runtime: 6 ms, faster than 38.03% of C++ online submissions for Longest Common Prefix.

Memory Usage: 9.30 MB, less than 35.75% of C++ online submissions for Longest Common Prefix.
*/

std::string Solution::longestCommonPrefix(std::vector<std::string>& strs)
{
   if (strs.empty())
   {
      return "";
   }

   std::string commonStr;
   const std::string& firstStr = strs[0];
   for (size_t i = 0; i < firstStr.length(); ++i)
   {
      for (size_t j = 1; j < strs.size(); ++j)
      {
         if (strs[j].length() <= i || strs[j][i] != firstStr[i])
         {
            goto end;
         }
      }
      commonStr += firstStr[i];
   }

   end:
   return commonStr;
}