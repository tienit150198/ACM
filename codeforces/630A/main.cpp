#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 1007
using namespace std;

ll n;

ll _powMod(ll a, ll n){
    if(n == 0)
        return 1;
    if(n == 1)
        return a % 100;
    ll res = _powMod(a,n/2) % 100;
    res = (res * res) % 100;

    if(n%2)
        res = (res * a) % 100;

    return res%100;
}

int main() {
    fast
    cin >> n;

    cout << _powMod(5,n);

    return 0;
}
