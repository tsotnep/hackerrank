#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int K,N;
    string s;
    cin>>N>>s>>K;
    K=K%26;
    
    for (int i=0;i<N;i++){
        if ((s[i] >= 'a' && s[i]<='z')){
            s[i] = 'a' + (s[i]-'a'+K)%26;
        }
        else{
            if (s[i] >= 'A' && s[i]<='Z'){
                s[i] = 'A' + (s[i]-'A'+K)%26;
            }
        }
        
    }
    cout<<s<<endl;
    
    return 0;
}

