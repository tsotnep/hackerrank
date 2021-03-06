#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;
string a="ABBAAAA", b="AABBBAZZ", ans="";

inline void fillup(int ia, int ib, int sa, int sb){
    // int da=sa-ia, db=sb-ib;
    int d=(sa-ia)-(sb-ib);
    // int c='Z'+1;    char cc=(char)c;    stringstream ss;    string ccc;    ss << cc;    ss >> ccc;
    string ccc="[";
    while(d){
        if (d>0) {d--; b+=ccc;}
        else  if (d<0) {d++; a+=ccc;}
    }
}

inline int aISless(int ia, int ib){
    int i=0, sa=a.size()-ia;
    while (i<sa){
        i++;
        ia++;
        ib++;
        if(a[ia] < b[ib]) return 1;
        if(a[ia] > b[ib]) return 0;
    }
    return 1;
}

int main() {

	int t = 1, sa,sb,ia,ib;
	cin >> t;
	while (t--) {
        cin >> a >> b;
        sa=a.size(); sb=b.size();
        ia=0; ib=0; ans = "";

        while(ia<sa && ib<sb){
            if (a[ia]<b[ib]) {ans+=a[ia]; ia++;}
            else{
                if (a[ia]>b[ib]) {ans+=b[ib]; ib++;}
                else{
                    fillup(ia,ib,sa,sb);
                    // cout << a.substr(ia) << endl;
                    // cout << b.substr(ib) << endl<<endl;
                    if (aISless(ia,ib)) {ans+=a[ia]; ia++;}
                    else {ans+=b[ib]; ib++;}
                }
            }
        }
        if (ia==sa) ans+=b.substr(ib,sb-ib);
        if (ib==sb) ans+=a.substr(ia,sa-ia);
		cout << ans<< endl;
	}
	return 0;
}
