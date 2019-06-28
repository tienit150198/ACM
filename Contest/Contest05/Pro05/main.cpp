#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
using namespace std;

ll isMax(ll a, ll b){
    return (a > b ? a : b);
}

int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;

    ll a[n + 1], f[n + 1];
    f[0] = 0;
    ll _max = INT_MIN;
    for(ll i = 1 ; i <= n; i++){
        cin >> a[i];

        if(i > 0){
            _max = isMax(a[i], _max + a[i]);
            f[i] = isMax(_max, f[i-1] + a[i]);
        }
    }
    _max = INT_MIN;
    for(ll i = 1 ; i < n; i++){
         _max = isMax(_max,f[i]);
    }
//    _max = isMax(_max , -1);
    cout << _max;

    return 0;
}
