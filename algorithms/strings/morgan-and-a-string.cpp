#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;
string a="ABBAAAA", b="AABBBAZZ", ans="";

void fillup(int ia, int ib){
    int da=a.size()-ia, db=b.size()-ib;
    int d=da-db;
    int c='Z'+1;    char cc=(char)c;    stringstream ss;    string ccc;    ss << cc;    ss >> ccc;
    while(d){
        if (d>0) {d--; b+=ccc;}
        else  if (d<0) {d++; a+=ccc;}
    }
}

int aISless(int ia, int ib){
    int i=0;
    while (i<a.size()){
        i++;
        if(a[ia+i] < b[ib+i]) return 1;
        if(a[ia+i] > b[ib+i]) return 0;
    }
    return 1;
}

int main() {

	int t = 1, sa,sb,ia,ib;
	cin >> t;
	while (t--) {
		long long i = 0, j = 0;
		cin >> a >> b;
        sa=a.size(); sb=b.size();
        ia=0; ib=0;
        ans = "";

        while(ia<sa && ib<sb){
            if (a[ia]<b[ib]) {ans+=a[ia]; ia++;}
            else{
                if (a[ia]>b[ib]) {ans+=b[ib]; ib++;}
                else{
                    fillup(ia,ib);
                    // cout << a.substr(ia) << endl;
                    // cout << b.substr(ib) << endl<<endl;
                    if (aISless(ia,ib)) {ans+=a[ia]; ia++;}
                    else {ans+=b[ib]; ib++;}
                }
            }
        }

		// cout << ans.substr(0,sa+sb) << endl;
        if (ia==sa) ans+=b.substr(ib,sb-ib);
        if (ib==sb) ans+=a.substr(ia,sa-ia);
		cout << ans<< endl;
	}
	return 0;
}
