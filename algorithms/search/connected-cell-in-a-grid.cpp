#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector< vector<int> > v(10, vector<int>(10));

int RECU(int i, int j){
    // cout<<"ee";
    if  (   j>=0 && j<10 &&
            i>=0 && i<10
        )
    {

    // for (i=0;i<10;i++)
    //     for (j=0;j<10;j++)
    //         cout<<v[i][j]<<" ";
    //is it possible that, if code below, will enter eternal loop, the cout line aboce, won't work.?
        if (v[i][j-1]==1) return 1+RECU(i,j-1);   cout<<"IN0 " << i<<" "<<j<<endl;
        if (v[i][j+1]==1) return 1+RECU(i,j+1);   cout<<"IN1 " << i<<" "<<j<<endl;
        if (v[i-1][j]==1) return 1+RECU(i-1,j);   cout<<"IN2 " << i<<" "<<j<<endl;
        if (v[i+1][j]==1) return 1+RECU(i+1,j);   cout<<"IN3 " << i<<" "<<j<<endl;

        if (v[i-1][j-1]==1) return 1+RECU(i-1,j-1);   cout<<"IN4 " << i<<" "<<j<<endl;
        if (v[i-1][j+1]==1) return 1+RECU(i-1,j+1);   cout<<"IN5 " << i<<" "<<j<<endl;
        if (v[i+1][j-1]==1) return 1+RECU(i+1,j-1);   cout<<"IN6 " << i<<" "<<j<<endl;
        if (v[i+1][j+1]==1) return 1+RECU(i+1,j+1);   cout<<"IN7 " << i<<" "<<j<<endl;
        return 0;
    }
    else{
        // cout<<"ELSEE";
        return 0;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m,n,i,j;
    cin>>m>>n;
    // vector< vector<int> > v(m, vector<int>(n));
    for (i=0;i<m;i++)
        for (j=0;j<n;j++){
            cin>>v[i][j];
    }

    int Max=-1, max=-1;
    for (i=0;i<m;i++)
        for (j=0;j<n;j++){
            // cout << i<<" "<<j<<endl;
            max=RECU(i,j);
            if (max>Max) Max=max;
        }
    cout <<Max;


    // max=RECU(0,0);
    // cout <<max;



    return 0;
}
