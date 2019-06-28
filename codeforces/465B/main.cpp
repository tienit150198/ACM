#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[2000];
ll num = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 1 ; i <= n ; i++){
        ll tmp;
        cin >> tmp;
        if(tmp){
            a[num++] = i;
        }
    }
    if(num == 0){
        cout << 0;
        return 0;
    }
    if(num == 1){
        cout << 1;
        return 0;
    }
    ll ans = 1;

    for(ll i = 1 ; i < num ; i++){
        ll tmp = a[i] - a[i - 1];
        if(tmp >= 2)
            tmp = 2;
        ans += tmp;
    }

    cout << ans;


    return 0;
}
