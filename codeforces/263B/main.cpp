#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;
ll a[100];
int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;

    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];

    if(k > n) {
        cout << -1;
        return 0;
    }
    sort(a,a+n);

    cout << a[n - k] << " " << 0;

    return 0;
}
