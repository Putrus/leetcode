#include "Solution.h"
//number 63
//Runtime: 0 ms, faster than 100.00%
//Memory usage: 7.8 MB, less than 69.22%





int Solution::uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
	std::vector<std::vector<int>> db(obstacleGrid.size(), std::vector<int>(obstacleGrid[0].size()));
	db[0][0] = 1;
	for (size_t i = 0; i < db.size(); i++) {
		for (size_t j = 0; j < db[0].size(); j++) {
			if (obstacleGrid[i][j] == 1) {
				db[i][j] = 0;
				continue;
			}
			if (i >= 1 && j >= 1){
				db[i][j] = db[i - 1][j] + db[i][j - 1];
			}
			else if (i >= 1) {
				db[i][j] += db[i - 1][j];
			}
			else if (j >= 1) {
				db[i][j] += db[i][j - 1];
			}
		}
	}
	return db[db.size() - 1][db[0].size() - 1];
}