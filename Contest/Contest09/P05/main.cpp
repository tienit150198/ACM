#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

map<ll,ll> t, t1;
ll n, m;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    ll tmp;
    for(ll i = 0 ; i < n; i++){
        cin >> tmp;
        t[tmp]++;
    }
    for(ll j = 0 ; j < m; j++){
        cin >> tmp;
        t1[tmp]++;
    }
    ll res = 0;
    for(ll i = -101 ; i <= 101 ; i++){
        if(t[i] && t1[i]){
            res++;
        }
    }
    cout << res;

    return 0;
}
