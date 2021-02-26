#include "Solution.h"
//number 299
//Runtime: 32 ms, faster than 5.24%
//Memory usage: 6.5 MB, less than 76.17%


std::string Solution::getHint(std::string secret, std::string guess) {
	int cows = 0;
	int bulls = 0;
	for (size_t i = 0; i < guess.size(); i++) {
		if (guess[i] == secret[i]) {
			bulls++;
			secret[i] = '-';
			guess[i] = '.';
			continue;
		}
	}
	for (size_t i = 0; i < guess.size(); i++) {
		for (size_t j = 0; j < secret.size(); j++) {
			if (guess[i] == secret[j]) {
				cows++;
				secret[j] = '-';
				break;
			}
		}
	}
	std::string sCows = std::to_string(cows);
	std::string sBulls = std::to_string(bulls);
	std::string result = sBulls + "A" + sCows + "B";
	return result;
}