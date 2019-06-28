#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll l[Max], r[Max];
ll L = 0, R = 0;

int main() {
    fast
    cin >> n;

    for(ll i = 0 ; i < n ; i++) {
        cin >> l[i] >> r[i];
        L += l[i];
        R += r[i];
    }

    ll _max = abs(L - R), j = 0;
    for(ll i = 0 ; i < n ; i++) {

        ll t = L - l[i] + r[i];
        ll t1 = R - r[i] + l[i];

        ll tmp = abs(t - t1)s;

        if(tmp > _max) {
            _max = tmp;
            j = i+1;
        }
    }

    cout << j;

    return 0;
}
