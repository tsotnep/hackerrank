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
	int N, ind = 0, c = 0, x;
	vector<int> ar;

	cin >> N;
	while (ind < N) {
		cin >> x;
		ar.push_back(x);
		ind++;
	}
	sort(ar.begin(), ar.end());
	for (int i = 0; i < ar.size(); i++) {
		c++;
		if (ar[i] != ar[i + 1]) {
			cout << N << endl;
			N-=c;
			c = 0;
		}
	}

	return 0;
}

