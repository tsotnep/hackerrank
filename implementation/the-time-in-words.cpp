#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int H, M;
	string sD[13] = { "zero", "one", "two", "three", "four", "five", "six",
			"seven", "eight", "nine", "ten", "eleven", "twelve" };
	string sC[2] = { "past", "to" };
	string sB[2] = { "", "minute" };
	string sA[21] = { "zero", "one", "two", "three", "four", "five", "six",
			"seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
			"fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
			"nineteen", "twenty" };
	string sQ = "quarter";
	string ans = "";
	cin >> H >> M;
	string a, b, c, d;
	d = sD[H + (M > 30)];
	c = sC[M > 30];
	b = sB[M % 15 != 0];
	b = (M > 1 && M < 59 && M % 15 != 0) ? b + "s" : b;
	a = (M <= 20) ? sA[M] :
		(M < 30) ? (sA[20] + " " + sA[M - 20]) :
		(M >= 40) ? sA[60 - M] :
		(M > 30) ? (sA[20] + " " + sA[40-M]) : "half";
	a = (M == 15 || M == 45) ? sQ : a;
	ans = (M != 0) ?
			a + ' ' + b + ((b == "") ? "" : " ") + c + ' ' + d :
			sA[H] + " o' clock";
	cout << ans;

	return 0;
}

