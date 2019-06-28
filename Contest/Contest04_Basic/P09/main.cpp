#include <bits/stdc++.h>
#define ll long long int
using namespace std;
map<ll,ll> t;
int main()
{
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;

    ll tmp;
    for(ll i = 0 ; i < m; i++){
        for(ll j = 0 ; j < n; j++){
            cin >> tmp;
            t[tmp]++;
        }
    }

    map<ll,ll>::iterator it = t.begin();
    while(it != t.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}
