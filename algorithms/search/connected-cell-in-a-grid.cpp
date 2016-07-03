#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector< vector<int> > v(10, vector<int>(10,0));

int RECU(int i, int j){
    cout<<"ENTER: "<<i<<" "<<j<<endl;
    if  (   j>=0 && j<10 && i>=0 && i<10   ){
        cout<<"IF cond"<<endl;

    //         cout<<v[i][j]<<" ";
    //is it possible that, if code below, will enter eternal loop, the cout line aboce, won't work.?

        //up, down, left, right
        if (v[i][j-1]   ==1)        {   v[i][j-1]   = 0;   cout<<"IN0 W " <<i<<" "<<j<<endl;   return 1+RECU(i,j-1);   }
        if (v[i][j+1]   ==1)        {   v[i][j+1]   = 0;   cout<<"IN1 E " <<i<<" "<<j<<endl;   return 1+RECU(i,j+1);   }
        if (v[i+1][j]   ==1)        {   v[i+1][j]   = 0;   cout<<"IN3 S " <<i<<" "<<j<<endl;   return 1+RECU(i+1,j);   }
        if (v[i-1][j]   ==1)        {   v[i-1][j]   = 0;   cout<<"IN2 N " <<i<<" "<<j<<endl;   return 1+RECU(i-1,j);   }

        //diagonals ;
        if (v[i-1][j-1] ==1)        {   v[i-1][j-1] = 0;   cout<<"IN4 NW " <<i<<" "<<j<<endl;   return 1+RECU(i-1,j-1); }
        if (v[i-1][j+1] ==1)        {   v[i-1][j+1] = 0;   cout<<"IN5 NE " <<i<<" "<<j<<endl;   return 1+RECU(i-1,j+1); }
        if (v[i+1][j-1] ==1)        {   v[i+1][j-1] = 0;   cout<<"IN6 SW " <<i<<" "<<j<<endl;   return 1+RECU(i+1,j-1); }
        if (v[i+1][j+1] ==1)        {   v[i+1][j+1] = 0;   cout<<"IN7 SE " <<i<<" "<<j<<endl;   return 1+RECU(i+1,j+1); }
        return 0;
    }
    else{
        cout<<"ELSE cond"<<endl;
        return 0;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m,n,i,j;
    cin>>m>>n;

    for (i=0;i<m;i++)
        for (j=0;j<n;j++){
            cin>>v[i][j];
    }

    int Max=-1, max=-1;
    for (i=0;i<m;i++)
        for (j=0;j<n;j++){
            cout<<"IN L "<<i<<" "<<j<<endl;
            if (v[i][j]==1) {v[i][j]=0; max=1+RECU(i,j);}
            if (max>Max) Max=max;
        }
    cout <<Max;

    return 0;
}
