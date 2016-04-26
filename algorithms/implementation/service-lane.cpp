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

int findMinium(int st, int end, int *ar) {
	int max = 3;
	for (int i = st; i <= end; i++) {
		if (ar[i] < max)
			max = ar[i];
	}
	return max;
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T, N;
	cin >> N>>T;
	int ar[N], n = N, ind = 0;
	while (ind<n) {
		cin >> ar[ind++];
	}
	int i, j;
	while (T--) {
		cin >> i >> j;
		cout << findMinium(i, j, ar)<<endl;
	}
	return 0;
}
