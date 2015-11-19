//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze
// Version     :
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in C++
// Task        : https://www.hackerrank.com/challenges/gem-stones
//============================================================================
 
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {
//int t=1; cin >> t; while (t--) 
{
    int n; cin >> n;
    int ans = -1;
    while (n--){
        string s;
        cin>>s;
        int ansT = 0;
        for (int i=0; i<s.length(); i++){
            ansT |= 1 << (s[i]-'a');            
        }
        ans &= ansT;        
    }
    int k=0, one=1;
    while(ans){
        k+= ((ans & one) == 1);
        ans = ans >> 1;
    }
    cout<<k;    
}return 0;}
