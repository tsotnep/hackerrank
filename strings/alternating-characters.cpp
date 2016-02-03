//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze
// Version     :
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
// Task        : https://www.hackerrank.com/challenges/alternating-characters
//============================================================================

#include <iostream>
#include <string>
#include <cmath>
 

using namespace std;

int main() {
        int t=1;
        cin >> t;
        while (t--) {
        string s;
        int k=0;
        cin>>s;
        for(int i=1; i<s.length(); i++)
            if (s[i] == s[i-1]) k++;       
        cout<<k<<endl;
        }
        return 0;
}
