#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll a[Max], f[Max], num = 0;
ll n, t;
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

    for(ll i = 2 ; i <= Max ; i++){
        if(isPrime(i))
            a[num++] = i;
    }

    for(ll i = 0 ; i < num ; i++){
        ll t = a[i];
        ll x = 1;
        ll c = 1;

        while(t * x <= 1000000){
            if(x >= t){
                bool f = true;
                ll tmp = x;

                for(ll j = 2 ; j <= t - 1 ; j++){
                    if(tmp % j == 0){
                        f = false;
                        break;
                    }
                }

                if(f){
                    c++;
                }
            }
            x++;
        }
            f[t] = c;
//            cout << t << " -> " << c << endl;
    }


    cin >> t;
    while(t--){
        cin >> n;

        cout << f[n] << endl;
    }


    return 0;
}
