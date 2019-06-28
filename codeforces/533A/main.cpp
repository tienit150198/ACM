#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[1011];

ll isMin(ll a, ll b, ll c) {
    ll _min = a;
    if(_min > b)
        _min = b;
    if(_min > c)
        _min = c;

    return _min;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];

    if(n == 1){
        cout << a[0] << " " << 0;
        return 0;
    }

    ll t = 1;
    ll ansMin = INT_MAX, ansT = 1;

    for(t = 1 ; t <= 100 ; t++) {
        ll _sum = 0;
        for(int i = 0 ; i < n ; i++) {
            ll tmp = isMin(abs(a[i] - t), abs(a[i]-1 - t), abs(a[i] + 1 - t));
            _sum += tmp;
        }

        if(ansMin > _sum){
            ansMin = _sum;
            ansT = t;
        }
    }

    cout << ansT << " " << ansMin;


    return 0;
}
