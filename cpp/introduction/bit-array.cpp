//https://www.hackerrank.com/challenges/bitset-1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
   int d=0;
   set<int>seeds;
   unsigned long long n,s,p,q,
   countedIterBefore=0, iterOnCurrentSeed=0,
   modulus=0, nextVal=0, currVal=0;

   //test inputs
   n=3; s=p=q=1;
   n=10000000;  s=658061970;  p=695098531;  q=1430548937;
   n=100000000; s=569099406;  p=1607140150; q=823906344;  //FAIL: should be 31, and is 100000000
   n=100000000; s=1232077670; p=126810854;  q=1536183938; //FAIL: should be 26, and is 100000000
   n=100000000; s=145466602330; p=126810854; q=1536183938; //should jump over modulus after second iteration
   // cin>>n>>s>>p>>q;

   // modulus=(1<<31);
   // modulus--; //=18446744071562067967
   modulus = 2147483648; //actual 2^31 - 1
   nextVal=s % modulus;
// cout << "s "<< s <<endl;
// cout << "modulus "<< modulus<<endl;
// cout << "nextVal "<< nextVal<<endl;
// cout << "nextVal+modulus "<< nextVal+modulus<<endl;

   // this number is way too big, so code written in loop is not working
   // somehow i should do this without actually performing the multiplication
   // bit-array.cpp:31:10: warning: integer constant is so large that it is unsigned [enabled by default]
   // cout<<14577145059443469734<<endl;

   while(countedIterBefore<n){
// cout<<"BIG "<<currVal<<endl;
      iterOnCurrentSeed=0;
      currVal=currVal % modulus; //starting see

      if (seeds.find(currVal) == seeds.end()){
         countedIterBefore+=iterOnCurrentSeed;
         seeds.insert(currVal);
      }
// cout<<"BIG2 "<<currVal<<endl;

      while(currVal < modulus && countedIterBefore + iterOnCurrentSeed < n)
      {
// cout<<"s "<<currVal<<endl;
         iterOnCurrentSeed++;
         nextVal = currVal*p+q; //TODO: this gets out of bounds, even if i use large number multiplier, like this: https://gist.github.com/jargnar/3263916 then i have to trim last several digits, convert it to integer and perform modulus operation later
         currVal = nextVal;
// cout<<"s2 "<<currVal<<endl;
// if (currVal > modulus) cout<<"XXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
      }
   }

   cout<<countedIterBefore<<endl;
   return 0;
}
