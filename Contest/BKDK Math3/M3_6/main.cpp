#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define limit 10001
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll p[Max], f[Max];
ll t,n;

void sieve() {
    // SINH PHI FUNCTION
    for(ll i = 1 ; i <= Max ; i++)
        p[i] = i;

    for(ll i = 2 ; i <= Max ; i++) {
        if(p[i] == i) {
            p[i]--;
            for(ll j = i * 2 ; j <= Max ; j += i) {
                p[j] = (p[j]/i) * (i-1);
            }
        }
    }
    // END

    for(ll i = 1 ; i <= Max ; i++) {
        f[i] = f[i - 1] + p[i];
    }
}



int main() {
    fast
    sieve();

    cin >> t;

    while(t--) {
        cin >> n;

        cout << f[n] << endl;
    }

    return 0;
}
