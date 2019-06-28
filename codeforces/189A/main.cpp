#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 100007
using namespace std;

ll n, a[4];
ll f[5000];
int main() {
    fast
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a,a+3);

    for(ll i = 0 ; i < 3 ; i++){
        f[a[i]] = 1;
    }

    for(ll i = 1 ; i <= n ; i++){
        ll x = 0;
        for(ll j = 0 ; j < 3 ; j++){
            if(i > a[j]){
                if(f[i - a[j]] > 0){
                    x = max(x, f[i-a[j]] + 1);
                }
            }
        }
        f[i] = max(f[i],x);
    }
    cout << f[n];

    return 0;
}
