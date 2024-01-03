#include "../../Solution/include/Solution.h"

#include <map>

/*
Runtime: 6 ms, faster than 38.03% of C++ online submissions for Longest Common Prefix.

Memory Usage: 9.30 MB, less than 35.75% of C++ online submissions for Longest Common Prefix.
*/

bool Solution::isValid(const std::string& s)
{
   int parentheses = 0;
   int square = 0;
   int curly = 0;
   for (char c : s)
   {
      if (c == '(')
      {
         ++parentheses;
      }
      else if (c == ')')
      {
         --parentheses;
         if (parentheses < 0)
         {
            return false;
         }
      }
      else if (c == '[')
      {
         ++square;
      }
      else if (c == ']')
      {
         --square;
         if (square < 0)
         {
            return false;
         }
      }
      else if (c == '{')
      {
         ++curly;
      }
      else if (c == '}')
      {
         --curly;
         if (curly < 0)
         {
            return false;
         }
      }
   }
   if (parentheses == square == curly == 0)
   {
      return true;
   }
   return false;
}