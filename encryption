//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze
// Version     :
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string s;
	int len, col, row;
	cin >> s;
	len = s.length();
	col = sqrt(len);
	row = col;
	if (row * col < len)
		col++;
	if (row * col < len)
		row++;
	while (s.length() != row * col)
		s += " ";

	//ifmanwasmeanttostayonthegroundgodwouldhavegivenusroots

	int i, j, k, newlen = s.length();

	for (i = 0; i < col; i++) {
		for (k = 0, j = i; (k < row) && (j < newlen); k++, j += col)
			cout << s[j];
		if (j - col < len)
			cout << " ";
	}
	return 0;
}

