#include "../../Solution/include/Solution.h"

/*
Runtime: 10 ms, faster than 82.51% of C++ online submissions for Longest Substring Without Repeating Characters.

Memory Usage: 6.9 MB, less than 91.15% of C++ online submissions for Longest Substring Without Repeating Characters.
*/

int Solution::lengthOfLongestSubstring(std::string s) {
   int current_length = 0;
   int result = 0;
   std::string current;

   for (auto const& c : s) {
      auto find = std::find(current.begin(), current.end(), c);
      if (find != current.end()) {
         current.erase(current.begin(), find + 1);
      }
      current += c;
      current_length = static_cast<int>(current.length());
      result = std::max(result, current_length);
   }
   return result;
}