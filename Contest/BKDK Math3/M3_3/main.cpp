#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

bool a[Max];
ll t;
string str;

bool isPrime(ll n) {
    if(n < 2)
        return false;
    for(ll i = 2 ; i * i <= n ; i++)
        if(n%i == 0)
            return false;
    return true;
}

int main() {
    fast

    for(ll i = 0 ; i <= Max ; i++) {
        a[i] = isPrime(i);
    }

    cin >> t;
    while(t--) {
        cin >> str;
        ll x[26];
        for(ll i = 0 ; i < 26 ; i++)
            x[i] = 0;
        for(ll i = 0 ; i < str.size() ; i++) {
            x[str[i] - 'a']++;
        }
        bool f = false;
        ll c = 0;
        for(ll i = 0 ; i < 26 ; i++) {
            ll tmp = x[i];
            if(tmp) {
                c++;
                if(!a[tmp]) {
                    f = true;
                    break;
                }
            }
        }
        if(f || !a[c]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
