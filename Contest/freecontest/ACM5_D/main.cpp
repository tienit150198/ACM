#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[Max], b[Max];
int main()
{
    ios::sync_with_stdio(false);

    cin >> n;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i];
    for(ll i = 0 ; i < n; i++)
        cin >> b[i];

    sort(a,a+n);
    sort(b,b+n,greater<ll>() );

    ll i = 0, j = 0;
    ll res = 0;
    while(i < n && j < n){
        res += a[i] * b[j];
        i++;
        j++;
    }
    cout << res;

    return 0;
}
