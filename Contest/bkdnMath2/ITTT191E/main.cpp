#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n, a, b;

int main() {
    fast
    cin >> n >> a >> b;
    ll t = n - a;
    while(t > b + 1)
        t--;
    cout << t;

    return 0;
}
