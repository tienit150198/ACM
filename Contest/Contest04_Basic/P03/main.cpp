#include <bits/stdc++.h>
#define ll long long int
using namespace std;
map<ll,ll> t;
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll a[n+1];

    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
        t[a[i]]++;
    }

    ll _max  = INT_MIN;
    ll value = 0;

    for(ll i = 0 ; i < n; i++){
        if(t[a[i]] > _max){
            _max = t[a[i]];
            value = a[i];
        }
    }

    cout << value << " " << _max;


    return 0;
}
