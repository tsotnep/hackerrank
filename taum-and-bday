#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T;
	cin >> T;
	while (T--) {
		long long B, W, X, Y, Z;
		long long minB = 99999, minW = 99999;
		cin >> B >> W >> X >> Y >> Z;
		minB = min(X, (Y + Z));
		minW = min(Y, (X + Z));
		cout << (minB * B) + (minW * W) << endl;
	}
	return 0;
}

