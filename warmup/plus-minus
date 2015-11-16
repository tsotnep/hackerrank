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
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int num;
	cin >> num;
	double p = 0, n = 0, z = 0, x;
	while (num--) {
		cin >> x;
		if (x > 0)
			p++;
		if (x < 0)
			n++;
		if (x == 0)
			z++;
	}
	double s = p + n + z;
	cout << setprecision(3) << (p / s) << endl;
	cout << setprecision(3) << (n / s) << endl;
	cout << setprecision(3) << (z / s) << endl;

	return 0;
}

