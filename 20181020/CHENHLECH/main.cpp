#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, q;
ll a[Max], l[Max];
ll u, v;

ll isSearch(ll a[], ll u, ll v){
    ll l = u, r = v;
    ll mid = (l + r) /2;
    ll Min = abs(a[v] - a[u - 1]);

    ll x, y;

    while(l <= r){
        mid = (l + r) /2;

        x = abs(a[mid] - a[u - 1]);
        y = abs(a[v] - a[mid]);

        Min = min(Min,abs(x - y));

        if(x < y)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return Min;
}

int main(){
    cin >> n >> q;

    for(ll i = 1 ; i <= n; i++){
        cin >> a[i];
       l[i] = l[i - 1] + a[i];
    }

   /* for(ll i = 1 ; i <= n; i++){
        cout << l[i] << " ";
    }
    cout << endl;*/

    while(q--){
        cin >> u >> v;


        cout << isSearch(l,u,v) << endl;

    }


    return 0;
}
