//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze, tsotnep@gmail.com
// Version     : 1.0
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
// task        : https://www.hackerrank.com/challenges/pangrams
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int t = 1;
//	cin >> t;
	while (t--) {
		// We promptly judged antique ivory buckles for the next prize
		// We promptly judged antique ivory buckles for the prize
		string s,
		sa = "abcdefghijklmnopqrstuvwxyz",
		sA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		getline(cin, s);
		int i, y = 1;
		for (i = 0; i < 26; i++) {
			if (
					(s.find(sa[i]) == string::npos)
					&&
					(s.find(sA[i]) == string::npos)
				) {
				y = 0;
				break;
			}
		}
		cout << ((y == 1) ? "pangram" : "not pangram");
	}
	return 0;
}

