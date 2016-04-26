//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze, tsotnep@gmail.com
// Version     : 1.0
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
// task        : https://www.hackerrank.com/challenges/anagram
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
int t = 1; cin >> t; while (t--)
{
	string s; cin>>s;
	int len=s.length()-1, ind, k=0;
	if (len%2==0) cout<<"-1"<<endl;
	else{
		for(int i=1+len/2;i<=len;i++){
			ind=(s.substr(0, 1+len / 2)).find(s[i]);
			if (ind == -1) k++;
			else s[ind] = '-';
		}
		cout<<k<<endl;
	}

}return 0;}

