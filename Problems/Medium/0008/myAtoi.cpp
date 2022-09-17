#include "../../Solution/include/Solution.h"

/*
Runtime: 4 ms, faster than 69.95% of C++ online submissions for String to Integer (atoi).

Memory Usage: 6.9 MB, less than 99.20% of C++ online submissions for String to Integer (atoi).
*/

int Solution::myAtoi(std::string s) {
   long long result = 0;
   bool neg = false;
   bool pos = false;
   bool number = false;
   for (auto const& c : s)
   {
      if (c == ' ')
      {
         if (number || pos || neg)
         {
            break;
         }
         continue;
      }

      if (!number && c == '-')
      {
         if (pos || neg || number)
            return 0;
         neg = true;
         continue;
      }
      
      if (!number && c == '+')
      {
         if (pos || neg || number)
            return 0;
         pos = true;
         continue;
      }

      if (c >= '0' && c <= '9')
      {
         result *= 10;
         result += c - '0';
         if (result >= INT_MAX)
            break;
         number = true;
      }
      else
      {
         break;
      }
   }
   auto max = [](int a, long long b) -> int
   {
      return a > b ? a : b;
   };
   
   auto min = [](int a, long long b) -> int
   {
      return a < b ? a : b;
   };

   return neg ? max(INT_MIN, -result) : min(INT_MAX, result);
}