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
	int T, N, K;
	cin >> T;
	while (T--) {
		cin >> N >> K;
		int kr=0,time,i=0;
		while (N--) {
			cin>>time;
			if(time<=0) kr++;
		}
		cout <<((kr<K)?"YES":"NO")<<endl;
	}
	return 0;
}

