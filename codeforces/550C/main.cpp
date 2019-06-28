#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

string str;

int main() {
    fast
    cin >> str;

    bool ok = false, ok1 = false;
    ll n = str.size();
    for(ll i = 0 ; i < n ; i++) {
        if(str[i] == '0') {
            ok = true;
            break;
        }
        if(str[i] == '8') {
            ok1 = true;
            break;
        }
    }

    if(ok) {
        cout << "YES" << endl <<0;
        return 0;
    }
    if(ok1) {
        cout << "YES" << endl << 8;
        return 0;
    }

    ll ans = 0;
    for(ll i = 0 ; i < n; i++) {
        ll x = str[i] - '0';
        for(ll j = i + 1 ; j < n ; j++) {
            ll y = str[j] - '0';
            if((x*10 + y)%8 == 0){
                ok = true;
                ans = x*10 + y;
                break;
            }
            for(ll k = j + 1 ; k < n ; k++) {
                ll z = str[k] - '0';
                if((x*100 + y*10 + z)%8 == 0) {
                    ok = true;
                    ans = x*100 + y*10 + z;
                    break;
                }
            }
            if(ok)
                break;
        }
        if(ok)
            break;
    }
    if(ok)
        cout << "YES" << endl << ans;
    else
        cout << "NO";
    return 0;
}
