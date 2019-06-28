#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define limit 10001
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll p[Max], f[Max], sum[Max];
ll t,n;
bool isSmith(ll n) {
    ll _sum = sum[n], _sum1 = 0;

    while(n != 1) {
        _sum1 += sum[p[n]];

        if(_sum1 > _sum)
            return false;

        n /= p[n];
    }

    return _sum == _sum1;
}

void sieve() {
    for(ll i = 1; i <= Max ; i++)
        sum[i] = sum[i/10] + i%10;
    for(ll i = 2 ; i*i <= Max ; i++) {
        if(!p[i]) {
            for(ll j = i*i ; j <= Max ; j += i)
                if(p[j] == 0)
                    p[j] = i;
        }
    }

    for(ll i = 2 ; i <= Max ; i++) {
        if(!p[i])
            p[i] = i;
        f[i] = f[i-1] + isSmith(i);
    }
}

int main() {
    fast
    sieve();

    cin >> t;
    while(t--) {
        ll l, r;
        cin >> l >> r;

        cout << f[r] - f[l - 1] << endl;
    }
    return 0;
}
