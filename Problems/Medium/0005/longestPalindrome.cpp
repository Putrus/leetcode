#include "../../Solution/include/Solution.h"

/*
Runtime: 239 ms, faster than 51.48% of C++ online submissions for Longest Palindromic Substring.

Memory Usage: 11.3 MB, less than 60.78% of C++ online submissions for Longest Palindromic Substring.
*/

std::string Solution::longestPalindrome(std::string s) 
{
   //dynamic programming solution
   /*
   2d array
   | |b|a|b|a|d|
   |b|1|0|1|0|0|
   |a| |1|0|1|0|
   |b| | |1|0|0|
   |a| | | |1|0|
   |d| | | | |1|
   */
   
   //size for 1d array is (n*n+n)/2 because 1 - 1, 2 - 3, 3 - 6, 4 - 10...
   size_t len = s.length();
   std::vector<bool> dp((len * len + len) / 2);
   int i = 0;
   int j = 0;
   int current_col = 0;
   int start = -1;
   int end = -1;
   int max = 0;
   int id = 0;
   while (j != len)
   {
      if (i == j || (s[i] == s[j] && (i == j - 1 || (i < current_col - 1 && dp[id - current_col + 1] == true))))
      {
         dp[id] = true;
         if (j - i >= max)
         {
            start = i;
            end = j + 1 - start;
            max = j - i;
         }
      }
      else
      {
         dp[id] = false;
      }

      if (++i > current_col)
      {
         ++current_col;
         ++j;
         i = 0;
      }
      ++id;
   }

   std::string result = s.substr(start, end);
   return result;
}