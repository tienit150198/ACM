#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

string str;

int main() {
    fast
    cin >> str;

    bool ok = false;
    ll c = 1;
    char t = str[0];
    for(ll i = 1 ; i < str.size() ; i++) {
        if(c >= 7) {
            ok = true;
            break;
        }
        if(str[i] == t)
            c++;
        else {
            c = 1;
            t = str[i];
        }
    }
    if(c >= 7) {
        ok = true;
    }

    if(ok)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
