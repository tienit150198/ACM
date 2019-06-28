#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void nhap(ll a[], ll n){
    for(ll i = 0; i < n; i++){
            cin >> a[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;

    ll a[n], b[n];

    nhap(a,n);
    nhap(b,n);

    sort(a,a+n);
    sort(b,b+n,greater<ll>());

    ll res = 0;
    for(ll i = 0 ; i < n; i++){
        res += a[i]*b[i];
    }

    cout << res;

    return 0;
}
