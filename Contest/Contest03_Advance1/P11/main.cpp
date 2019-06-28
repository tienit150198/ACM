#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isCheck(ll a, ll b, ll c){
    return (a + b > c && a + c > b && b + c > a);
}

int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll a[n + 1];
    for(ll i = 0 ; i  <n; i++)
        cin >> a[i];

    sort(a,a+n, greater<ll>());
    ll _max  =0;
    for(ll i = 0 ; i < n; i++){
        for(ll j = i+1 ; j < n; j++){
            for(ll k = j +1 ; k < n ; k++)
            if(isCheck(a[i],a[j],a[k])){
                _max = max(_max, (a[i] + a[j] + a[k]));
            }
        }
    }
    cout << _max;
    return 0;
}
