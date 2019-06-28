#include <bits/stdc++.h>
#define ll long long int

using namespace std;
ll a[100000];
int main()
{
    ios::sync_with_stdio(false);

    ll n, m, k;
    cin >> n >> m >> k;

    ll tmp;
    int t = 0;
    for(ll i = 0 ; i < n; i++){
        for(ll j = 0 ; j < m; j++){
            cin >> tmp;
            a[t++] = tmp;
        }
    }

    sort(a,a+t,greater<ll>());
    cout << a[k-1];



    return 0;
}
