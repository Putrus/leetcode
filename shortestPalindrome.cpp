#include "Solution.h"
//number 214
//not finished

std::string Solution::shortestPalindrome(std::string s) {
	std::string rev = s;
	std::reverse(rev.begin(), rev.end());
	for (size_t i = 0; i < s.size(); i++) {
		if (s.substr(0, s.size() - i) == rev.substr(i)) {
			return rev.substr(0, i) + s;
		}
	}
	return "";
}