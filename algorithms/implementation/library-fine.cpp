#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int D, M, Y, d, m, y, fine = 0;
	cin >> D >> M >> Y >> d >> m >> y;

	fine = (Y == y && M == m && D > d) 	? (D - d) * 15 	: 0;
	fine = (Y == y && M > m) 			? (M - m) * 500 : fine;
	fine = (Y > y) 						? 10000 		: fine;

	cout << fine << endl;
	return 0;
}

