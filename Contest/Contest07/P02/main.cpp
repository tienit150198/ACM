#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
map<ll,ll> t;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll tmp;
    for(ll i = 0 ; i < n; i++){
        cin >> tmp;
        t[tmp]++;
    }

    map<ll,ll>::iterator it = t.begin();
    ll tk = 0;
    ll c = 0;
    while(it != t.end()){
        c++;
        tk = max (it->second, tk);
        it++;
    }

    cout << c << " " << tk;

    return 0;
}
