#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector< vector<int> > grid(12, vector<int>(12,0));
vector< vector<int> > visited(12, vector<int>(12,0));

int RECU(int ii, int jj){
    visited[ii][jj]=1;
    int ans=1;

    for (int i=ii-1;i<=ii+1;i++)
        for (int j=jj-1;j<=jj+1;j++){
            if (visited[i][j]==0 && grid[i][j]==1 && i>0 && j>0 && i<12 && j<12){
                ans+=RECU(i,j);
            }
        }
    return ans;
}

int main() {
    int m,n,i,j,Max=-1, max=-1;
    cin>>m>>n;

    for (i=1;i<=m;i++)
    for (j=1;j<=n;j++){
        cin>>grid[i][j];
    }

    for (i=1;i<=m;i++)
    for (j=1;j<=n;j++){
        if (grid[i][j]==1) {
            grid[i][j]=0;
            max=RECU(i,j);
        }
        if (max>Max) Max=max;
    }

    cout << Max;

    return 0;
}
