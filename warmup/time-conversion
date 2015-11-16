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
	int HHour, MMinute, SSeconds;
	char PP, P, M;
	cin >> HHour >> PP
		>> MMinute >> PP
		>> SSeconds >> P >> M;
	if (P == 'A') {
		HHour = (HHour == 12 ? 0 : HHour);
	}
	else{
		if (HHour != 12) {
		HHour = (HHour == 12 ? 0 : 12+HHour);
		}
	}
	cout 	<< setfill('0') << setw(2) << HHour << ':'
			<< setfill('0') << setw(2) << MMinute << ':'
			<< setfill('0') << setw(2) << SSeconds <<endl;

	return 0;
}

