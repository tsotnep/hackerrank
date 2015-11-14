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
		int inc = N % 2;
		int n = N / 2 + inc;
		int sum = 0;
		for (int i = n; i > 0; i--) {
			int mul = 1;
			int c = i;
			while (c) {
				mul *= 2;
				c--;
			}
			sum += (mul==1)?0:mul;
		}
		sum += !inc;
		cout << sum << endl;
	}
	return 0;
}

//ans-inp-interpreted	math	simplified math
//
//1-0-0	1			=1
//
//2-1-1	1*2			=1*2
//3-2-1	(1*2)+1			=1*2+1
//
//6-3-2	(1*2)+1)*2		=1*2*2+1*2
//7-4-2	(1*2)+1)*2+1		=1*2*2+1*2+1
//
//14-5-3	(1*2)+1)*2+1)*2		=1*2*2*2+1*2*2+1*2
//15-6-3	(1*2)+1)*2+1)*2+1	=1*2*2*2+1*2*2+1*2+1
//
//30-7-4	(1*2)+1)*2+1)*2+1)*2	=1*2*2*2*2+1*2*2*2+1*2*2+1*2
//31-8-4	(1*2)+1)*2+1)*2+1)*2+1	=1*2*2*2*2+1*2*2*2+1*2*2+1*2+1


