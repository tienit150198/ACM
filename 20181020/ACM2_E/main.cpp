#include <bits/stdc++.h>
#define ll long long int
#define Max 1000011
using namespace std;
ll p;
ll a[Max],f[Max];
map<ll,bool> t;
int main()
{
    ios::sync_with_stdio(false);
    cin >> p;
    for(ll i = 0 ; i < p ; i++){
        cin >> a[i];
        t[a[i]] = false;
    }

    ll _max = 0, res = 0;
    for(ll i = 0 ; i < p ; i++){
        if(a[i] != a[i + 1] && !t[a[i]]){
            _max++;
            t[a[i]]++;
        }
        res = max(res,_max);
    }
    cout << res;

    return 0;
}
