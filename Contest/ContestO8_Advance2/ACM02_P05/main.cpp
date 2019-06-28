#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n, m, k;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;

    ll l = 1, r = n*m;
    ll res = 0;
    while(l <= r){
        ll mid = (l + r ) / 2;
        ll c = 0;
//        cout <<mid << endl;
        for(ll i = 1 ; i <= n; i++){
            c += min(m,mid/i);
//            cout << i <<" -> " << mid/i << endl;
        }
        if(c >= k){
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;

    }
    cout << res;

    return 0;
}
