#include "../../Solution/include/Solution.h"

/*
Runtime: 2395 ms, faster than 5.03% of C++ online submissions for Divide Two Integers.

Memory Usage: 6.36 MB, less than 36.48% of C++ online submissions for Divide Two Integers.
*/

int Solution::divide(int dividend, int divisor)
{
   if (dividend == 0 || divisor == 0)
   {
      return 0;
   }

   if (dividend == std::numeric_limits<int>::min() && divisor == -1)
   {
      return std::numeric_limits<int>::max();
   }

   if (divisor == 1)
   {
      return dividend;
   }

   if (divisor == -1)
   {
      return -dividend;
   }

   int number = dividend;
   int result = 0;

   if (dividend > 0)
   {
      do
      {
         if (divisor > 0)
         {
            number -= divisor;
            ++result;
         }
         else
         {
            number += divisor;
            --result;
         }
      } while (number > 0);

      if (number < 0 && result > 0)
      {
         --result;
      }

      if (number < 0 && result < 0)
      {
         ++result;
      }
   }
   else
   {
      do
      {
         if (divisor > 0)
         {
            number += divisor;
            --result;
         }
         else
         {
            number -= divisor;
            ++result;
         }
      } while (number < 0);

      if (number > 0 && result > 0)
      {
         --result;
      }

      if (number > 0 && result < 0)
      {
         ++result;
      }
   }
  
   return result;
}