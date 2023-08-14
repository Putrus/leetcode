#include "../../Solution/include/Solution.h"

#include <vector>

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Regular Expression Matching.

Memory Usage: 6.67 MB, less than 69.20% of C++ online submissions for Regular Expression Matching.
*/

enum class Val : char
{
   Mismatch = 0,
   Match,
   Undefined
};

bool isMatchRecursion(const std::string& s, const std::string& p, int sId, int pId, std::vector<std::vector<Val>>& dp)
{
   if (pId == p.length())
   {
      return sId == s.length();
   }

   Val& dpValue = dp[sId][pId];
   if (dpValue != Val::Undefined)
   {
      return dpValue == Val::Match;
   }

   bool result = sId != s.length() && (p.at(pId) == s.at(sId) || p.at(pId) == '.');
   if (pId < p.length() - 1 && p.at(pId + 1) == '*')
   {
      //* means zero or more of the preceding element
      bool zero = isMatchRecursion(s, p, sId, pId + 2, dp);
      bool more = result && isMatchRecursion(s, p,sId + 1, pId, dp);
      dpValue = (zero || more) ? Val::Match : Val::Mismatch;
   }
   else
   {
      //classic comparison
      bool classic = result && isMatchRecursion(s, p, sId + 1, pId + 1, dp);
      dpValue = classic ? Val::Match : Val::Mismatch;
   }
   return dpValue == Val::Match;
}

bool Solution::isMatch(std::string s, std::string p)
{
   std::vector<std::vector<Val>> dp =
      std::vector<std::vector<Val>>(s.length() + 1, std::vector<Val>(p.length() + 1, Val::Undefined));
   return isMatchRecursion(s, p, 0, 0, dp);
}