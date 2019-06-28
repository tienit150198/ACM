#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[Max];

int main() {
    cin >> n;
    for(ll i = 1 ; i <= n; i++) {
        cin >> a[i];
    }
    for(ll i = 1 ; i <= n; i++) {
        ll t = a[i];
        ll can = (ll)sqrt(i);
        for(ll j = 1 ; j <= can ; j++) {
            if(i * j <= n && a[i] * a[j] != a[i*j]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
