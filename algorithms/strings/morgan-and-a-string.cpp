//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze, tsotnep@gmail.com
// Version     : 1.1
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
// task        : https://www.hackerrank.com/challenges/morgan-and-a-string
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		string a, b, ans;
		long long i = 0, j = 0;
		cin >> a >> b;
		long long la = a.length(), lb = b.length();
		a += char('z' + 1);
		b += char('z' + 1);
		while (lb != i && lb != j) {
			if (a[i] < b[j])
				ans += a[i++];
			else if (a[i] > b[j])
				ans += b[j++];
			else {
				int tempi = i + 2, tempj = j + 2;
				while (a[tempi] == b[tempj] && a[tempi] == a[tempi - 1]
						&& a[tempj] == a[tempj - 1]) {
					tempi++;
					tempj++;
				}
				if (a[tempi] == a[tempj])
					ans += a[i++];
				else if (a[tempi] < a[tempj])
					ans += a[i++];
				else
					ans += a[j++];
			}
		}
		ans = ans + a.substr(i, la - i) + b.substr(j, lb - j);
		cout << ans << endl;
//		cout << ((a<b)?"a<b":"a>b");
	}
	return 0;
}

