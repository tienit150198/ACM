#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 200007
using namespace std;

ll n,m;

int main() {
    fast
    cin >> n >> m;

    ll _min = max(0LL, n - 2*m);
    ll can = (ll)sqrt(m);

    while(can * (can-1) / 2 < m) can++;
    ll _max = n - can;

    cout << _min << " " << _max;

    return 0;
}
