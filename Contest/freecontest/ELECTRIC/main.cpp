#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, m;
struct t{
    ll u, v, w;
};

t a[Max];
ll q;

bool cmp(t a, t b){
    return a.w > b.w;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;

    ll ans[n];

    for(ll i = 0 ; i < m ; i++){
        cin >> a[i].u >> a[i].v >> a[i].w;

        ans[a[i].u] += a[i].w;
    }

    sort(a,a+m, cmp);
  /*  for(ll i = 1 ; i <= n-1; i++){
        for(ll j = i + 1 ; j <= n ; j++){

        }
    }*/
    cin >>q;

    while(q--){
        ll x, y;
        cin >> x >> y;

    }




    return 0;
}
