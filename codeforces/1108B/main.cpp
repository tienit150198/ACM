#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    ll x = INT_MIN, y = INT_MIN;
    for(ll i = 0 ; i < n ; i++) {
        ll tmp;
        cin >> tmp;
        x = max(x,tmp);
        a[tmp]++;
    }
    for(ll i = 1 ; i * i <= x ; i++) {
        if(x % i == 0) {
            a[i]--;
            if(x / i != i) {
                a[x/i]--;
            }
        }
    }

    for(ll i = 1 ; i <= 10000 ; i++)
        if(a[i])
            y = i;

    cout << x << " " << y;

    return 0;
}
