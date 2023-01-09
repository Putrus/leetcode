#include "../../Solution/include/Solution.h"

/*
Runtime: 0 ms, faster than 100% of C++ online submissions for Reverse Integer.

Memory Usage: 5.9 MB, less than 75.80% of C++ online submissions for Reverse Integer.
*/

int Solution::reverse(int x) 
{
   std::string str_x = std::to_string(x) + (x < 0 ? '-' : ' ');
   long long l = std::stoll(std::string(str_x.rbegin(), str_x.rend()));
   return l > INT_MAX || l < INT_MIN ? 0 : static_cast<int>(l);
}