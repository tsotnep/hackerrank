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
		cin >> N;
		int sum = 0, n = N;
		while (n) {
			if (((n % 10) != 0) && !(N % (n % 10)))
				sum++;
			n /= 10;
		}
		cout << sum << endl;
	}
	return 0;
}

