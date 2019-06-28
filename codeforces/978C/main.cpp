#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n, m;
ll a[Max];

int main() {
    ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    cin >> n >> m;

    a[0] = 0;
    for(ll i = 1 ; i <= n ; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    ll b, j = 0;
    for(ll i = 0 ; i < m ; i++) {
        cin >> b;

        while(a[j] < b){
            j++;
        }
        cout << j << " " << b - a[j-1] << endl;

    }

    return 0;
}
