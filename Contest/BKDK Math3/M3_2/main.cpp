#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define limit 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

bool a[Max];
vector<ll> vt;
ll f[limit];
ll t, n;

void sieve(){
    for(ll i = 0 ; i <= Max ; i++)
        a[i] = false;
    for(ll i = 2 ; i*i <= Max ; i++){
        if(!a[i]){
            for(ll j = i*i ; j <= Max ; j += i)
                a[j] = true;
        }
    }

    for(ll i = 2 ; i <= Max ; i++)
        if(!a[i])
            vt.push_back(i);
}

int main() {
    fast
    sieve();
    ll _size = vt.size();
    ll j = 0;
    for(ll i = 0 ; i <= limit; i++){
        for( ; j <= _size ; j++){
            ll tmp = vt[j]%11;
            if(vt[j] >= i && tmp == 1){
                f[i] = vt[j];
                break;
            }
        }
    }

    cin >> t;
    while(t--){
        cin >> n;

        cout << f[n] << endl;
    }

    return 0;
}
