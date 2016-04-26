#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T, R, r, C, c;
	cin >> T;
	while (T--) {
		cin >> R >> C;
		string G[R];
		for (int i = 0; i < R; i++)
			cin >> G[i];
		cin >> r >> c;
		string P[r];
		for (int i = 0; i < r; i++)
			cin >> P[i];
		bool wasFound = false;
		for (int i = 0; i <= R - r; i++) {
			for (int j = 0; j <= C - c; j++) {
				if (G[i].substr(j, c) == P[0].substr(0, c)) {
					int rIndi = i, cIndj = j;
					bool same = true;
					for (int gInd = rIndi, pInd = 0; gInd < rIndi + r;
							gInd++, pInd++)
						if (G[gInd].substr(cIndj, c) != P[pInd].substr(0, c)) {
							same = false;
							break;
						}
					if (same == true) {
						wasFound = true;
						break;
						break;
					}
				}

			}
		}
		if (wasFound == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}


