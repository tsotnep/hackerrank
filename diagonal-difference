#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,x,s=0,s1=0,s2=0;
    cin>>n;
    long long a[n][n];
    for (int i=0; i<n; i++)
        for (int j=0; j<n;j++){
        cin>>a[i][j];    
        if(i==j) s1+=a[i][j];
        if(i+j==(n-1)) s2+=a[i][j];
    }
    s=(s1>s2?(s1-s2):(s2-s1));
    cout <<s;
    return 0;
}

