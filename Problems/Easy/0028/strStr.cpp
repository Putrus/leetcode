#include "../../Solution/include/Solution.h"

/*
Runtime: 3 ms, faster than 45.69% of C++ online submissions for Find the Index of the First Occurrence in a String.

Memory Usage: 6.77 MB, less than 28.95% of C++ online submissions for Find the Index of the First Occurrence in a String.
*/

int Solution::strStr(std::string haystack, std::string needle)
{
   for (int i = 0; i < static_cast<int>(haystack.size()); ++i)
   {
      std::string substr = haystack.substr(i, needle.size());
      if (substr == needle)
      {
         return i;
      }
   }
   return -1;
}