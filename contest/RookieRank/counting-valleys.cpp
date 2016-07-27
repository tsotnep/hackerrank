#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, h=0, total=0;
    bool wasBelow=false;
    char d;
    cin>>n;

    while(n--){
        cin>>d;
        if (d=='U')h++;
        if (d=='D')h--;

        if(h>=0 && wasBelow == true){
            total++;
            wasBelow = false;
        }

        if(h<0){
            wasBelow = true;
        }
    }
    cout<<total;
    return 0;
}
