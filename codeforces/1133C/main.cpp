#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 200007
using namespace std;

ll n;
ll a[Max];

ll isSearch(ll a[], ll l, ll r, ll key){
    ll mid = (l + r ) / 2;
    ll ans = -1;
    while(l <= r){
        mid = (l + r) / 2;
        if(abs(a[mid] - key) <= 5){
            if(a[mid] >= key){
                ans = mid;
            }
            l = mid + 1;
        }else if(a[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return ans;
}

int main() {
    fast
    cin >> n;

    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,a+n);

    ll ans = 0;
   /* for(ll i = 0 ; i < n ; i++){
        ll x = isSearch(a,0,n-1,a[i]);

        if(x != -1)
            ans = max(ans, x - i + 1);
    }*/

    ll x = 0;
    ll j = 0;
    for(ll i = 0 ; i < n ; i++){

         while(j < n && a[j] - a[i] <= 5){
            j++, x++;
         }

         ans = max(ans,x);
         x--;
    }
    cout << ans;

    return 0;
}
