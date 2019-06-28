#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, m;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;

    ll ans = n, val = 0;
    for(ll i = 1 ; i <= n; i++){
        ll tmp;
        cin >> tmp;

        ll tmp1 = tmp / m;
        if(tmp1 * m < tmp)
            tmp1++;

        if(tmp1 >= val){
            val = tmp1;
            ans = i;
        }
    }
    cout << ans;

    return 0;
}
