#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll m, n, s;
ll a[Max], b[Max];
map<ll,ll> t;
int main() {
    cin >> m >> n >> s;
    ll _max = INT_MIN;
    for(ll i = 0 ; i < m; i++){
        cin >> a[i];

        t[s - a[i]]++;
    }
    for(ll i = 0 ; i < n; i++){
        cin >> b[i];
        t[b[i]]++;
    }
    map<ll,ll>::iterator it = t.begin();
    ll res = 0;
    while(it != t.end()){
        if(it->second >= 2){
            res+= it->second/2;
        }
        it++;
    }

    cout << res;


    return 0;
}
