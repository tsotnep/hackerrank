#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector< vector<int> > v(12, vector<int>(12,0));

int RECU(int i, int j){
    int ans=0;
    if  (   j>0 && j<=10 && i>0 && i<=10   ){
        if (v[i-1][j-1] ==1)        {   v[i-1][j-1] = 0;    ans+= 1+RECU(i-1,j-1); }
        if (v[i-1][j]   ==1)        {   v[i-1][j]   = 0;    ans+= 1+RECU(i-1,j);   }
        if (v[i][j-1]   ==1)        {   v[i][j-1]   = 0;    ans+= 1+RECU(i,j-1);   }

        if (v[i-1][j+1] ==1)        {   v[i-1][j+1] = 0;    ans+= 1+RECU(i-1,j+1); }
        if (v[i+1][j-1] ==1)        {   v[i+1][j-1] = 0;    ans+= 1+RECU(i+1,j-1); }

        if (v[i][j+1]   ==1)        {   v[i][j+1]   = 0;    ans+= 1+RECU(i,j+1);   }
        if (v[i+1][j]   ==1)        {   v[i+1][j]   = 0;    ans+= 1+RECU(i+1,j);   }
        if (v[i+1][j+1] ==1)        {   v[i+1][j+1] = 0;    ans+= 1+RECU(i+1,j+1); }
    }
    return ans;
}

int main() {
    int m,n,i,j,Max=-1, max=-1;
    cin>>m>>n;

    for (i=1;i<=m;i++)
    for (j=1;j<=n;j++){
        cin>>v[i][j];
    }

    for (i=1;i<=m;i++)
    for (j=1;j<=n;j++){
        if (v[i][j]==1) {
            v[i][j]=0;
            max=1+RECU(i,j);
        }
        if (max>Max) Max=max;
    }

    cout << Max;

    return 0;
}
