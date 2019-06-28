#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll getBIT(ll m){
    ll res = 0;
    for(m = m; m >= 1  ; m &= m - 1){
        cout << m << " ";
        res += m;
    }
    return res;
}

void updateBIT(ll m, ll n){
    for(ll i = m ; i <= n; i += i & -i){
        cout << i << " ";
    }
}

int main()
{
    // Array start at 1
    getBIT(2);
    /*
    http://ntucoder.net/Blog/Details/17?fbclid=IwAR2xJa-lm7EzPQ1chRQOuGSHqqWP0E4w4Tdw-cceKmppEqWaen_RGosxSMA
    */
    return 0;
}
