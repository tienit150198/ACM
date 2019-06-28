#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define MOD 1000003
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n, q, t;

ll uoc[Max], a[Max], b[Max];
ll _gcd(ll a, ll b){
    return (b == 0 ? a : _gcd(b,a%b));
}

void sieve(){
    for(ll i = 2 ; i <= Max ; i++){
        uoc[i] += i;
        for(ll j = i * 2 ; j <= Max ; j += i){
            uoc[j] += i;
        }
    }

    for(ll i = 2 ; i <= Max ; i++)
        uoc[i] = uoc[i]%MOD;
}

int main() {
    fast
    sieve();

    cin >> t;

    while(t--){
        cin >> n >> q;

        for(ll i = 1 ; i <= n ; i++){
            cin >> b[i];
            a[i] = uoc[b[i]];
        }
        while(q--){
            ll choose, l, r, indx;
            cin >> choose;

            if(choose == 1){
                cin >> l >> r;

                ll _max = a[l];

                for(ll i = l ; i <= r ; i++)
                    _max = max(_max,a[i]);

                cout << _max << endl;
            }else{
                cin >> indx;
                ll x = a[indx];
                for(ll i = 1 ; i <= n ; i++){
                    if(a[i] == indx){
                        a[i] = b[i];
                        break;
                    }
                }
            }
        }

    }

    return 0;
}
