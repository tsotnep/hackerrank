#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   unsigned long long n,s,p,q;
   cin>>n>>s>>p>>q;
   //n=3, s=p=q=1;

   long long a[n], k=1, i, mod=(1<<31);
   mod-=k;

   a[0] = s & mod;

   for (i=1;i<n;i++){
      a[i]=(a[i-1]*p+q) & (mod);
   }

   //an es unda meqna an Set-shi udna chameyara tavidanve
   sort(a, a+n);
   for (i=1;i<n;i++){
      if (a[i]!=a[i-1]) k++;
   }

   cout<<k<<endl;

   return 0;
}
