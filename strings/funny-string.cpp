//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze
// Version     :
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string sa;
		bool yes = true;
		cin >> sa;
		int sz = sa.length() - 1;
		for (int i = 1; i <= sz; i++) {
			int norm = abs(sa[i] - sa[i - 1]), rev = abs(sa[sz - i] - sa[sz - i + 1]);
			if (norm != rev) {
				yes = false;
				break;
			}
			//acxz
			//c-a, x-c, z-x
			//x-z, c-x, a-c
			//2-3, 1-2, 0-1
			//2-3, 1-2, 0-1
		}
		cout << ((yes == true) ? "Funny" : "Not Funny") << endl;
	}
	return 0;
}

