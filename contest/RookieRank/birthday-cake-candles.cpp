#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n, count=0, max=-1;
    cin >> n;
    vector<int> height(n);
    for(int i = 0;i < n;i++){
       cin >> height[i];
        if (height[i]==max) {count++;}
        if (height[i]>max) {max=height[i]; count=1;}
    }
    cout<<count;
    return 0;
}
