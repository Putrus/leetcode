#include "Solution.h"
//number 28
//Runtime: 4 ms, faster than 73.07%
//Memory usage: 6.7 MB, less than 95.84%

int Solution::strStr(std::string haystack, std::string needle) {
	if (needle == "") {
		return 0;
	}

	for (size_t i = 0; i < haystack.size(); i++) {
		if (haystack.size() - i >= needle.size()) {
			bool ok = true;
			for (size_t j = 0; j < needle.size(); j++) {
				if (haystack[i + j] != needle[j]) {
					ok = false;
					break;
				}
			}
			if (ok) {
				return i;
			}
		}
	}
	return -1;
}