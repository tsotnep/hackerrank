#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	char c;
	cin >> n;
	int map[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			cin>>c;
			map[i][j] = c - '0';
		}
	}

	for (int i = 1; i < n - 1; i++){
		for (int j = 1; j < n - 1; j++) {
			if (	   (map[i][j] > map[i][j + 1])
					&& (map[i][j] > map[i][j - 1])
					&& (map[i][j] > map[i + 1][j])
					&& (map[i][j] > map[i - 1][j])
				)
				map[i][j] = 101;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 101)
				cout << 'X';
			else
				cout << map[i][j];
		}
		cout << endl;
	}

	return 0;
}


