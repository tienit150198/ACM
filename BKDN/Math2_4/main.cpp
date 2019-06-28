#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;

        ll ans = 0;
        ll i = 5;

        while(n/i >= 1){
            ans += (n/i);
            i *= 5;
        }
        cout << ans << endl;
    }

    return 0;
}
