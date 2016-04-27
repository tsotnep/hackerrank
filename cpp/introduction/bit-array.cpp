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
   countedIterationsBefore=1, iterationsOnCurrentSeed=0,
   modulus=0, nextVal=0, currVal=0;

   //test inputs
   n=3; s=p=q=1;
   n=10000000; s=658061970; p=695098531; q=1430548937;
   n=100000000; s=569099406; p=1607140150; q=823906344; //should be 31, and is 100000000
   // cin>>n>>s>>p>>q;

   modulus=(1<<31);
   modulus--;
   nextVal=s & modulus;

   while(countedIterationsBefore<n){
      iterationsOnCurrentSeed=0;
      while(
         nextVal<modulus &&
         countedIterationsBefore + iterationsOnCurrentSeed < n
      )
      {
         currVal = nextVal;
         iterationsOnCurrentSeed++;
         nextVal=currVal*p+q;
      }
      currVal=nextVal & modulus;
      if (seeds.find(currVal) == seeds.end()){
         countedIterationsBefore+=iterationsOnCurrentSeed;
         seeds.insert(currVal);
      }
   }
   cout<<countedIterationsBefore<<endl;
   return 0;
}
