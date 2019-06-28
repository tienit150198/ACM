#include <bits/stdc++.h>
#define ll long long int
using namespace std;
map<ll,ll> t;
int main()
{
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;

    ll a[n + 1];
    for(ll i = 0 ; i  < n; i++){
        cin >> a[i];
    }
    sort(a,a+n, greater<ll>());
    cout << a[k-1];


    return 0;
}
