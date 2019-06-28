#include <bits/stdc++.h>
#define ll long long int
#define Max 10011
#define pb push_back
using namespace std;
ll n,m;

list<ll> a[Max];

ll tomau() {
    ll res[n];
    bool vst[n];
    for(ll i = 0 ; i < n; i++) {
        res[i] = -1;
        vst[i] = false;
    }

    res[0] = 0;
    vst[0] = false;

    for(ll i = 1 ; i < n; i++) {

        list<ll>::iterator it = a[i].begin();
        while(it != a[i].end()) {
            if(res[*it] != -1) {
                vst[res[*it]] = true;
            }
            it++;
        }

        ll u = 0;
        for(u = 0 ; u < n; u++) {
            if(!vst[u])
                break;
        }

        res[i] = u;

        it = a[i].begin();
        while(it != a[i].end()) {
            if(res[*it] != -1) {
                vst[res[*it]] = false;
            }
            it++;
        }
    }

    ll _max = 0;
    for(ll i = 0 ; i < n; i++){
        _max = max(_max, res[i]);

    }

    return _max+1;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;

    ll u, v;
    for(ll i = 0 ; i < m; i++) {
        cin >> u >> v;
        a[u].pb(v);
        a[v].pb(u);
    }

    cout << tomau();


    return 0;
}
