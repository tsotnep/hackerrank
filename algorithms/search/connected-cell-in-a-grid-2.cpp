#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int rowSZ = 10;
int colSZ = 10;
int initVal = 0;

vector< vector<int> > grid(colSZ, vector<int>(rowSZ,initVal));
vector< vector<int> > visited(colSZ, vector<int>(rowSZ,initVal));

int Breadth_First_Search(int ind_I, int ind_J){
    /*
    1 1 0 2
    0 1 1 0
    0 0 0 1
    4 4 0 0
    if you give indexes[0,0; 0,1; 0,2; 0,3; 1,0; 1,1;...] of this array, if will return:
    at first: 7
    then: 8
    the main function, will return maximum of them
    */

    queue <pair <int, int> > q;
    int sum_of_weights=0, first=0;
    if (visited[ind_I][ind_J]==0 && grid[ind_I][ind_J]!=0) {q.push(make_pair(ind_I,ind_J));}

    while(!q.empty()){
        visited[ind_I][ind_J]=1;
        sum_of_weights+=grid[ind_I][ind_J];

        for (int i=ind_I-1;i<=ind_I+1;i++)
        for (int j=ind_J-1;j<=ind_J+1;j++){
            if (i>=0 && j>=0 && i<rowSZ && j<colSZ && visited[i][j]==0 && grid[i][j]!=0){
                visited[i][j]=1;
                q.push(make_pair(i,j));
            }
        }

        q.pop();
        if (!q.empty()){
            ind_I=q.front().first;
            ind_J=q.front().second;
        }
    }
    return sum_of_weights;
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
        if (grid[i][j]!=0) {
            max=Breadth_First_Search(i,j);
        }
        if (max>Max) Max=max;
    }

    cout << Max;

    return 0;
}
