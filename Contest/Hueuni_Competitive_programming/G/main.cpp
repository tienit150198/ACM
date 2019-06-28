#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n, k;
ll a[Max];

ll Counter(ll a[], ll n, ll k) {
    ll f[k+1];
    memset(f,0,sizeof(f));
    ll s = 0;
    //  f[0]++;
    for(ll i = 0 ; i < n ; i++) {
        s += a[i];
        f[((s%k) + k) %k]++;
    }

    ll res = 0;
    for(ll i = 0 ; i < k ; i++) {
        if(f[i] > 1)
            res += (f[i] * (f[i]-1))/2;
    }
    res += f[0];
    return res;
}

int main() {
    fast
    ll t;

    cin >> n >> k;

    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    cout << Counter(a,n,k) << endl;




    return 0;
}
/*
double pi = 8 * 100.0/13;
	cout << fixed << setprecision(6) << pi <<endl;
    làm tṛn
*/
