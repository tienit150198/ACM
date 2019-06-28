#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[Max];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i  < n; i++){
        cin >> a[i];
    }

    ll ans = 0;
    ll i = 0;
    ll c = 0;
    while(i < n){
        if(a[i + 1] >= a[i] ){
            c++;
            i++;
        }else{
            ans = max(c,ans);
            c = 0;
            i++;
        }
    }
    cout << ans+1;


    return 0;
}
