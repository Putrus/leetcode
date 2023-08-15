#include "../../Solution/include/Solution.h"

#include <algorithm>
#include <map>

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.

Memory Usage: 6.64 MB, less than 22.94% of C++ online submissions for Letter Combinations of a Phone Number.
*/

std::vector<std::string> Solution::letterCombinations(std::string digits)
{
   std::map<char, std::string> keyboard = { { '2', "abc" }, { '3', "def" }, { '4', "ghi"},
      { '5', "jkl" }, { '6', "mno" }, { '7', "pqrs" }, { '8', "tuv" }, { '9', "wxyz" } };

   std::vector<std::string> letters;
   for (const auto& digit : digits)
   {
      size_t lettersSize = letters.size();
      if (lettersSize == 0)
      {
         for (size_t i = 0; i < keyboard[digit].length(); ++i)
         {
            letters.push_back({ keyboard[digit][i] });
         }
         continue;
      }
      for (size_t i = 0; i < lettersSize; ++i)
      {
         std::string base = letters[i];
         letters[i] += keyboard[digit][0];
         for (size_t j = 1; j < keyboard[digit].length(); ++j)
         {
            letters.push_back(base + keyboard[digit][j]);
         }
      }
   }
   std::sort(letters.begin(), letters.end());
   return letters;
}