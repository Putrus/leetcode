#include "../../Solution/include/Solution.h"

#include <map>

/*
Runtime: 3 ms, faster than 45.40% of C++ online submissions for Valid Parentheses.

Memory Usage: 6.60 MB, less than 74.18% of C++ online submissions for Valid Parentheses.
*/

bool Solution::isValid(const std::string& s)
{
   std::string p;
   for (char c : s)
   {
      if (c == ')')
      {
         if (!p.empty() && p[p.size() - 1] == '(')
         {
            p.erase(p.begin() + p.size() - 1);
         }
         else
         {
            return false;
         }
      }
      else if (c == ']')
      {
         if (!p.empty() && p[p.size() - 1] == '[')
         {
            p.erase(p.begin() + p.size() - 1);
         }
         else
         {
            return false;
         }
      }
      else if (c == '}')
      {
         if (!p.empty() && p[p.size() - 1] == '{')
         {
            p.erase(p.begin() + p.size() - 1);
         }
         else
         {
            return false;
         }
      }
      else
      {
         p += c;
      }
   }

   if (p.empty())
   {
      return true;
   }

   return false;
}