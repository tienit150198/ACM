#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

bool isPrime(ll a) {
    if(a < 2)
        return false;
    ll _sqrt = sqrt(a);
    for(ll i = 2 ; i <= _sqrt ; i++)
        if(!(a%i))
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);

    cin >> n;

    cout << n << endl;
    for(ll i = 1 ; i <= n; i++)
        cout << 1 << " ";

    return 0;
}
