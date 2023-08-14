#include "../../Solution/include/Solution.h"

/*
Runtime: 10 ms, faster than 73.76% of C++ online submissions for Roman to Integer.

Memory Usage: 6.06 MB, less than 77.09% of C++ online submissions for Roman to Integer.
*/

int Solution::romanToInt(std::string s)
{
   int result = 0;
   for (size_t i = 0; i < s.length(); ++i)
   {
      if (s[i] == 'I')
      {
         if (i < s.length() - 1 && s[i + 1] == 'V' || s[i + 1] == 'X')
         {
            --result;
         }
         else
         {
            ++result;
         }
      }
      else if (s[i] == 'X')
      {
         if (i < s.length() - 1 && s[i + 1] == 'L' || s[i + 1] == 'C')
         {
            result -= 10;
         }
         else
         {
            result += 10;
         }
      }
      else if (s[i] == 'C')
      {
         if (i < s.length() - 1 && s[i + 1] == 'D' || s[i + 1] == 'M')
         {
            result -= 100;
         }
         else
         {
            result += 100;
         }
      }
      else if (s[i] == 'M')
      {
         result += 1000;
      }
      else if (s[i] == 'D')
      {
         result += 500;
      }
      else if (s[i] == 'L')
      {
         result += 50;
      }
      else if (s[i] == 'V')
      {
         result += 5;
      }
   }
   return result;
}