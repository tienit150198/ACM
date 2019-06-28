#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n;
ll a[200007];

int main()
{
    cin >> n;

    for(ll i = 1 ; i <= n ; i++)
        cin >> a[i];
    sort(a,a+n);

    ll ans = 0;
    ll i = 1, j = 1;
    while(i <= n && j <= n){
        if(a[i] >= j){
            ans++;
            j++, i++;
        }else{
            i++;
        }
    }
    cout << ans;

    return 0;
}
