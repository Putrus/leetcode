#include "Solution.h"
//number 17
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 7 MB, less than 31.09%

std::vector<std::string> Solution::letterCombinations(std::string digits) {

	std::vector<std::string> phone = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

	std::vector<std::string> result;

	if (digits.length() != 0) {
		backtrack("", digits, result, phone);
	}

	return result;
}

void Solution::backtrack(std::string combination, std::string nextDigits, std::vector<std::string>& result, std::vector<std::string> phone)
{
	if (nextDigits.length() == 0) {
		result.push_back(combination);
		return;
	}
	else {
		int digit = nextDigits[0] % 50;
		std::string letters = phone[digit];
		for (int i = 0; i < letters.length(); i++) {
			std::string nextNextDigits = nextDigits.substr(1);
			backtrack(combination + letters[i], nextNextDigits, result, phone);
		}
	}
}