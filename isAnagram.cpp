#include "Solution.h"

bool Solution::isAnagram(std::string s, std::string t) {
   std::sort(s.begin(), s.end());
   std::sort(t.begin(), t.end());
   return s == t;
}