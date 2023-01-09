#include "../../Solution/include/Solution.h"

/*
Runtime: 7 ms, faster than 94.60% of C++ online submissions for Zigzag Conversion.

Memory Usage: 8.3 MB, less than 67.17% of C++ online submissions for Zigzag Conversion.
*/

std::string Solution::convert(std::string s, int numRows) 
{
   std::string result;

   if (numRows == 1)
   {
      return s;
   }

   for (int i = 0; i < numRows; ++i)
   {
      for (int j = i; j < s.length();)
      {
         result += s[j];
         if (i > 0 && i < numRows - 1)
         {
            //m        p
            //a    [n] u
            //r [i]    t [a]
            //c        r
            //next elements in [] brackets above
            int next = j + (numRows - 1 - i) * 2;
            if (next < s.length())
            {
               result += s[next];
            }  
         }
         //vertical columns
         j += numRows * 2 - 2;
      }
   }
   return result;
}