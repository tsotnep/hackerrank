//============================================================================
// Name        : PosNegZero2.cpp
// Author      : Tsotne
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	long long T, N;
	cin >> T;
	while (T--) {
		cin >> N; //same as n
		long long j, n = N, max_j = 0, max_i = 0;
		for (j = 0; j <= n; j++) {
			if (((N - 5 * j) % 3 == 0) && ((N - 5 * j) >= 0)) {
				max_i = (N - 5 * j) / 3;
				max_j = j;
				break;
			}
		}

		if ((max_i * 3 + max_j * 5) != N)
			cout << "-1" << endl;
		else {
			while (max_i) {
				cout << "555";
				max_i--;
			}
			while (max_j) {
				cout << "33333";
				max_j--;
			}
			cout << endl;
		}
	}
	return 0;
}

