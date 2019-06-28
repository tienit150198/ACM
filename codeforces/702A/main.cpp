#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

ll n;
ll a[Max];

int main()
{
    fast
    cin >> n;
    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];

    ll i = 0;
    ll ans = 0, t = 1;
    while(i < n-1){
        if(a[i] < a[i + 1]){
            t++;
        }else{
            ans = max(ans, t);
            t = 1;
        }
        i++;
    }
    ans = max(ans,t);
    cout << ans;

    return 0;
}
