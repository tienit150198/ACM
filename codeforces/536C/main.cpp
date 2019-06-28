#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define ipair pair<ll,ll>
#define MOD 10000000007
#define Max 300007
using namespace std;

ll n;
ll a[Max];

int main()
{
    fast
    cin >> n;

    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];

    sort(a,a+n);

    ll ans = 0;
    ll i = 0, j = n - 1;;
    for(ll i = 0 ; i < n/2 ; i++, j--){
        ans = ans + (a[i] + a[j])*(a[i] + a[j]);
    }
    cout << ans;

    return 0;
}
