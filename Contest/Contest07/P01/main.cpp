#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define Max 111
using namespace std;

ll n, k;
ll f[Max][Max];

int main()
{
    // Cnk = Cn-1k-1 + Cn-1k
    ios::sync_with_stdio(false);
    cin >> n >> k;

    for(ll i = 1 ; i <= n; i++){
        f[i][0] = 1;
        f[i][i] = 1;

        for(ll j = 1; j < i ; j++){
            f[i][j] = (f[i - 1][j - 1]%MOD + f[i - 1][j])%MOD;
        }
    }

    cout << f[n][k]%MOD;
    return 0;
}
