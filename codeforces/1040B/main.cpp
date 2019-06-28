#include <bits/stdc++.h>
#define ll long long int
#define Max 200007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n, k;
ll f[2000];

int main() {
    fast
    cin >> n >> k;
    ll t = n / (2*k + 1), t1 = n%((2*k + 1));
    if(t1)
        t++;
    else
        t1 = 2*k;
    cout << t << endl;

    for(ll i = 1 + t1/2 ; i <= n ; i = i + k*2 + 1)
        cout << i << " ";

    return 0;
}
