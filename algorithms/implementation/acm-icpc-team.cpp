#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N, M;
	cin >> N >> M;
	int ar[N][M], n = N, m = M;
	char c;
	while (n > 0) {
		while (m > 0) {
			cin >> c;
			ar[N - n][M - m] = c - '0';
			m--;
		}
		m = M;
		n--;
	}

	int MaxCount = -1, TotalNum = 0;
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
			if (i != j) {
				int CurCount = 0;

				for (int k = 0; k < M; k++) {
					if (ar[i][k] == 1 || ar[j][k] == 1)
						CurCount++;
				}
				if (CurCount > MaxCount) {
					MaxCount = CurCount;
					TotalNum = 1;
				} else if (CurCount == MaxCount) {
					TotalNum++;
				}

			}
	cout << MaxCount << endl << TotalNum << endl;

	return 0;
}

