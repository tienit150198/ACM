#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll a[30];

int main() {
    fast
    a[0] = 1;
    a[1] = 1;
    for(ll i = 2 ; i <= 20 ; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    cin >> n;

    cout << a[n];

    return 0;
}
