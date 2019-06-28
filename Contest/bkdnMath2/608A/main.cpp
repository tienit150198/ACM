#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define limit 10007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n, s;
struct m{
    ll f,t;
};

bool cmp(m a, m b){
    if(a.f > b.f)
        return true;
    if(a.f == b.f && a.t < b.f)
        return true;
    return false;
}

m a[1007];

int main() {
    fast
    cin >> n >> s;

    for(ll i = 0 ;i < n ; i++)
        cin >> a[i].f >> a[i].t;
    a[n].f = 0;
    a[n].t = 0;

    ll ans = 0, i = 0, _move = 0;

    sort(a,a+n,cmp);

    for(ll i = 0 ; i <= n ; i++){
        ll x = s - a[i].f;
        ans = ans + x;
        if(a[i].t > ans)
            ans = ans + (a[i].t - ans);
        s = a[i].f;
    }
    cout << ans;

    return 0;
}
