#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, n, i, j;
    cin>>t;

    while(t--){
        cin>>n;
        vector< vector<char> > v(n, vector<char>(n,0));
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>v[i][j];
            }
            sort(v[i].begin(),v[i].end());
        }
        bool ans=true;
        //i=0;
        for(i=0;i<n;i++){
            for(j=1;j<n;j++){
                if(v[j][i]<v[j-1][i]) ans=false;
            }
        }

        if (ans==false) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}
