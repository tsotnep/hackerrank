#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int rowSZ = 10;
int colSZ = 10;
int initVal = 0;

vector< vector<int> > grid(colSZ, vector<int>(rowSZ,initVal));
vector< vector<int> > visited(colSZ, vector<int>(rowSZ,initVal));

int Depth_First_Search_Recursive(int ii, int jj){
    visited[ii][jj]=1;
    int ans=1;

    for (int i=ii-1;i<=ii+1;i++)
        for (int j=jj-1;j<=jj+1;j++){
            if (i>=0 && j>=0 && i<rowSZ && j<colSZ && visited[i][j]==0 && grid[i][j]==1){
                ans+=Depth_First_Search_Recursive(i,j);
            }
        }
    return ans;
}

int main() {
    int m,n,i,j,Max=-1, max=-1;
    cin>>m>>n;

    for (i=0;i<m;i++)
    for (j=0;j<n;j++){
        cin>>grid[i][j];
    }

    for (i=0;i<m;i++)
    for (j=0;j<n;j++){
        if (grid[i][j]==1) {
            max=Depth_First_Search_Recursive(i,j);
        }
        if (max>Max) Max=max;
    }

    cout << Max;

    return 0;
}
