#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector< vector<int> > v(12, vector<int>(12,0));

int RECU(int i, int j){
    //cout<<"ENTER: "<<i<<" "<<j<<endl;


    if  (   j>0 && j<=10 && i>0 && i<=10   ){
        //cout<<"IF cond"<<endl;



    //         //cout<<v[i][j]<<" ";


    //is it possible that, if code below, will enter eternal loop, the cout line aboce, won't work.?

        //up, down, left, right
        if (v[i][j-1]   ==1)        {   v[i][j-1]   = 0;   return 1+RECU(i,j-1);   } //cout<<"IN0 W " <<i<<" "<<j<<endl;
        if (v[i][j+1]   ==1)        {   v[i][j+1]   = 0;   return 1+RECU(i,j+1);   } //cout<<"IN1 E " <<i<<" "<<j<<endl;
        if (v[i-1][j]   ==1)        {   v[i-1][j]   = 0;   return 1+RECU(i-1,j);   } //cout<<"IN2 N " <<i<<" "<<j<<endl;
        if (v[i+1][j]   ==1)        {   v[i+1][j]   = 0;   return 1+RECU(i+1,j);   } //cout<<"IN3 S " <<i<<" "<<j<<endl;

        //diagonals ;
        if (v[i-1][j-1] ==1)        {   v[i-1][j-1] = 0;      return 1+RECU(i-1,j-1); }//cout<<"IN4 NW " <<i<<" "<<j<<endl;
        if (v[i-1][j+1] ==1)        {   v[i-1][j+1] = 0;      return 1+RECU(i-1,j+1); }//cout<<"IN5 NE " <<i<<" "<<j<<endl;
        if (v[i+1][j-1] ==1)        {   v[i+1][j-1] = 0;      return 1+RECU(i+1,j-1); }//cout<<"IN6 SW " <<i<<" "<<j<<endl;
        if (v[i+1][j+1] ==1)        {   v[i+1][j+1] = 0;      return 1+RECU(i+1,j+1); }//cout<<"IN7 SE " <<i<<" "<<j<<endl;


        return 0;
    }
    else{
        return 0;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    freopen("input.t","r",stdin);
    freopen("output.t","w",stdout);
    int m,n,i,j;
    cin>>m>>n;

    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++){
            cin>>v[i][j];
    }

//DEBUG
    for (i=0;i<v.size();i++){
        for (j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout << endl;
    }

    int Max=-1, max=-1;
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++){
            //cout<<"IN L "<<i<<" "<<j<<endl;


            if (v[i][j]==1) {v[i][j]=0; max=1+RECU(i,j); cout <<"max "<<max<<" i="<<i<<" j="<<j<<endl;}
            if (max>Max) Max=max;

        }
    cout <<Max<<endl;

//DEBUG
    for (i=0;i<v.size();i++){
        for (j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
