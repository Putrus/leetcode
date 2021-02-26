#include "Solution.h"
//number 62
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 6.1 MB, less than 73.54%


int Solution::uniquePaths(int m, int n) {
	std::vector<int> db(n);
	db[0] = 1;
	for (int i = 0; i < m; i++) {
		for (int j = 1; j < n; j++) {
			db[j] += db[j - 1];
		}
	}
	return db[n-1];
}