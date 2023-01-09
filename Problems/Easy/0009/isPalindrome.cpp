#include "../../Solution/include/Solution.h"

/*
Runtime: 19 ms, faster than 69.05% of C++ online submissions for Palindrome Number.

Memory Usage: 6 MB, less than 31.10% of C++ online submissions for Palindrome Number.
*/

bool Solution::isPalindrome(int x) 
{
   std::string str_x = std::to_string(x);
   std::string reverse_str_x = std::string(str_x.rbegin(), str_x.rend());
   return str_x == reverse_str_x;
}