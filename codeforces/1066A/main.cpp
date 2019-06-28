#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll t;
ll n, v, l ,r;

int main() {
    fast
    cin >> t;

    while(t--){
        cin >> n >> v >> l >> r;

        ll tmp = n/v - (r/v - (l-1)/v);
        cout << tmp<< endl;
    }

    return 0;
}
