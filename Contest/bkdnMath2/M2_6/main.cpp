#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
bool a[Max];
ll f[Max];

bool isPrime(ll a) {
    if(a < 2)
        return false;

    ll tmp = sqrt(a);

    for(ll i = 2 ; i <= tmp ; i++) {
        if(!(a%i))
            return false;
    }
    return true;
}

int main() {
    fast
    // duyệt mảng đánh dấu các số nguyên tố
    for(ll i = 2 ; i <= Max ; i++) {
        if(isPrime(i)) {
            a[i] = true;
        }
    }
    // cộng dồn giá trị.
    for(ll i = 1 ; i <= Max ; i++) {
        if(a[i])
            f[i] += i;
        f[i] += f[i - 1];
    }

    cin >> n;

    while(n--) {
        ll l, r;
        cin >> l >> r;

        ll ans = f[r] - f[l-1];
        cout << ans << endl;
    }

    return 0;
}
