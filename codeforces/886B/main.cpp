#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n;
ll a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll _max = INT_MIN;
    for(ll i = 1 ; i <= n ; i++){
        ll tmp;
        cin >> tmp;

     /*   if(a[tmp])
            continue;
*/
        a[tmp] = i;
        _max = max(_max, tmp);
    }
    ll ans = INT_MAX, _min = INT_MAX;
    for(ll i = 0 ; i <= Max ; i++){
        if(a[i]){
            if(a[i] < _min){
                ans = i;
                _min = a[i];
            }
        }
    }
    cout << ans;

    return 0;
}
