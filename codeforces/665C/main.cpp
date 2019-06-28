#include <bits/stdc++.h>
#define ll long long int
#define Max 200007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

string str;
map<ll,ll> a;

int main() {
    fast
    cin >> str;
    ll n = str.size();

    for(ll i = 0 ; i < n - 1 ; i++) {
        if(str[i] == str[i + 1]) {
            ll j = i, t = 0;

            while( j < n - 1 && str[j] == str[j + 1]) {
                t++;
                j++;
            }
            a[i] = t+1;
            i = j;
        }
    }

    map<ll,ll>::iterator it = a.begin();
    while(it != a.end()) {
        ll u = it->first, v = it->second;
        ll i = u;
        if(v%2)
            i++;
//        cout << u << " -> " << v << endl;
        for(; i < u + v ; i += 2) {
            char t = str[i];

            while(t == str[i + 1] || t == str[i - 1]) {
                t++;
                if(t > 'z')
                    t = 'a';
            }
            str[i] = t;
        }

        it++;
    }
    cout << str;
    return 0;
}
