#include "Solution.h"
//number 10
//Runtime: 8 ms, faster than 62.84%
//Memory usage: 6.9 MB, less than 67.95%


bool Solution::isMatch(std::string s, std::string p) {
	std::vector<std::vector<bool>> arr(p.size() + 1, std::vector<bool>(s.size() + 1));
	//tablica programowania dynamicznego
	//pierwszy element prawdziwy, bo s=""=p
	arr[0][0] = 1;
	//s = "". Moze go spelniac kazdy ciag p zlozony z elementow przeplatanych gwiazdkami np. "a*b*c*.*"
	for (size_t i = 0; i < p.size(); i++) {
		if (p[i] == '*') {
			arr[i + 1][0] = arr[i - 1][0];
		}
	}

	for (size_t i = 0; i < p.size(); i++) {
		for (size_t j = 0; j < s.size(); j++) {
			if (p[i] == s[j] || p[i] == '.') {
				//jezeli ciag wczesniejszy byl prawdziwy to ten tez bedzie prawdziwy
				arr[i + 1][j + 1] = arr[i][j];
			}
			if (p[i] == '*') {
				//jezeli ciag dwa wyzej byl prawdziwy, to ten rowniez jest prawdziwy, bo element moze wystapic 0 razy
				arr[i + 1][j + 1] = arr[i - 1][j + 1];

				if (p[i - 1] == s[j] || p[i - 1] == '.') {
					//jesli w ciagu p jest . lub ten element jest identyczny z s to sprawdzamy czy dla poprzedniego ciagu bylo to rowniez prawdziwe
					//jezeli tak to ten tez jest prawdziwy
					arr[i + 1][j + 1] = arr[i + 1][j] || arr[i + 1][j + 1];
				}
			}
		}
	}
	//ostatni element tablicy programowania dynamicznego jest rezultatem
	return arr[p.size()][s.size()];
}