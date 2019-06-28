#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;
string str;
ll a[27];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    cin >> str;

    for(ll i = 0 ; i < n ; i++)
        a[str[i] - 96]++;

    ll ans = 0;
    ll c = 0;
    for(ll i = 1 ; i <= 26 && c < k; i++) {
        if(a[i]) {
            ans += i;
            i ++;
            c++;
        }
    }
    if(c < k)
        cout << -1;
    else
        cout << ans;

    return 0;
}
