//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze, tsotnep@gmail.com
// Version     : 1.0
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
// task        : https://www.hackerrank.com/challenges/palindrome-index
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
		int la = a.length() - 1, i, j;
		for (i = 0, j = la; i <= la; j--, i++) {
			if (a[i] != a[j])
				break;
		}
		if (i == la + 1)
			cout << "-1" << endl;
		else if ((a[i + 1] == a[j]) && (a[i + 2] == a[j - 1]))
			cout << i << endl;
		else
			cout << j << endl;
	}
	return 0;
}

