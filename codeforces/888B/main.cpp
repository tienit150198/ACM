#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;


/*
88
LLUUULRDRRURDDLURRLRDRLLRULRUUDDLLLLRRDDURDURRLDURRLDRRRUULDDLRRRDDRRLUULLURDURUDDDDDLDR

*/

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    string str;
    cin >> str;
    ll tL = 0, tR = 0, tU = 0, tD = 0;
    for(ll i = 0 ; i < n ; i++) {
        if(str[i] == 'U')       tU++;
        else if(str[i] == 'D')  tD++;
        else if(str[i] == 'L')  tL++;
        else                    tR++;
//        cout << i << " -> " << str[i] << " -> " << tU << " " << tD << " " << tL << " " << tR << endl;
    }
    cout << min(tU,tD) * 2 + min(tR,tL) * 2;

    return 0;
}
