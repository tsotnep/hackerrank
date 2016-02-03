#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        
        int nashti=n/c, axali=0;
        answer+=nashti;
        while(nashti>=m)
        {
            axali = nashti/m;
            answer +=axali;
            nashti = nashti%m;
            nashti += axali;
            
        }
        cout<<answer<<endl;
    }
    return 0;
}

