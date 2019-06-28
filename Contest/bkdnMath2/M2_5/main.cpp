#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll a[Max];
void sieve() {
    for(ll i = 1 ; i <= Max ; i++)
        a[i]++;
    for(ll i = 2 ; i <= Max ; i++) {
        a[i]++;
        for(ll j = i*2 ; j <= Max ; j += i) {
            a[j]++;
        }
    }
}

ll t, n;

struct m {
    ll _max, valPre;   // valPre là giá trị đạt max tại vị trí i.
};

m f[Max];

int main() {
    fast

    sieve();

    for(ll i = 1 ; i <= Max ; i++) {
        f[i]._max = a[i]*i;
        f[i].du = i;

        if(f[i-1]._max >= f[i]._max) {
            f[i].valPre = f[i-1].valPre;
            f[i]._max = f[i-1]._max;
        }
    }

    cin >> t;
    while(t--) {
        cin >> n;

        cout << f[n]._max + n - f[n].valPre << endl;
    }


    return 0;
}
