#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;
ll a[200];

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> k;
    double _sum = 0, avg = 0;
    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i];
        _sum += a[i];
    }

    avg = _sum / (double)n;

    if(floor(avg + 0.5) >= k) {
        cout << 0;
        return 0;
    }
    ll t = 0;
    while(true) {
        _sum += k;
        n++;
        t++;
        avg = _sum / (double)n;

        if(floor(avg + 0.5) >= k) {
            cout << t;
            break;
        }
    }

    return 0;
}
