//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze, tsotnep@gmail.com
// Version     : 1.0
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
// task        : https://www.hackerrank.com/challenges/the-love-letter-mystery
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		string a;
		cin >> a;
		int i, la = a.length() - 1, k = 0;
		for (i = 0; i < la / 2 + la % 2; i++) {
			k += (abs(a[la - i] - a[i]));
		}
		cout << k << endl;
	}
	return 0;
}

