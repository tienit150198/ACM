#include <bits/stdc++.h>
#define ll long long int
#define Max 10000077
using namespace std;

ll a[Max];
ll numPrime = 0;
bool Prime[Max];

ll isMax(ll a, ll b) {
    return (a > b ? a : b);
}

void sieve(ll l, ll r) {
    for(ll i = l ; i <= r; i++)
        Prime[i] = true;

    for(ll i = 2 ; i * i < r ; i++) {
        for(ll j = max(i*i, (l + (i - 1)) / i*i) ; j <= r ; j += i) {
            Prime[j - l] = false;
        }
    }
    for(ll i = isMax(l,2); i <= r; i++) {
        if(Prime[i - l])
            a[numPrime++] = i;
    }
}

bool isPrime(int a) {
    if(a<2)
        return 0;
    int tmp = sqrt(a);
    for(int i = 2 ; i <= tmp ; i++)
        if(!(a%i))
            return 0;
    return 1;
}

ll tach(ll n) {
    ll res = 0;
    while(n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}

ll phantich(ll n) {
    vector<ll> res;
    ll j = 0;
    while(n != 1) {
        if(isPrime(n)) {
            res.push_back(n);
            break;
        }
        if(n%a[j] == 0) {
            n /= a[j];
            res.push_back(a[j]);
        } else {
            j++;
        }
    }
    ll s = 0;
    ll _size = res.size();
    for(ll i = 0 ; i < _size ; i++) {
        ll tmp = res[i];
        s += tach(tmp);
    }

    return s;
}

ll process(ll n) {
    for(ll i = n + 1; ; i++) {
        if(isPrime(i))
            continue;
        ll s = tach(i);
        ll tmp = phantich(i);
        if(tmp == s) {
            return i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    sieve(0,10000000);
    ll n;
    cin >> n;
    if(n == 0) {
        cout << 1 << endl;
    } else if(n < 4) {
        cout << 4 << endl;
    } else
        cout << process(n)<< endl;

    return 0;
}
