//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze, tsotnep@gmail.com
// Version     : 1.0
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
// task        : https://www.hackerrank.com/challenges/two-strings
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
int t = 1; cin >> t; while (t--)
{
	string a,b,c;
	cin>>a>>b;
	int la=a.length(), lb=b.length(), i;
	if (la>lb){c=a; a=b; b=c;}
	int min=a.length();
	for(i=0;i<min;i++){
		if(b.find(a[i]) != string::npos) break; //!= string::npos
	}
	cout<<((i==min)?"NO":"YES")<<endl;

}return 0;}

