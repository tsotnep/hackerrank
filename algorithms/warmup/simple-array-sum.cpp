#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,number,sum=0;
    cin>>N;
    while(N--){
        cin>>number;
        sum+=number;
    }
    cout<<sum<<endl;
        
    return 0;
}

