#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define limit 10001
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

bool a[Max];
vector<ll> vt;
ll f[Max];
ll t,n;

void sieve(){
    for(ll i = 0 ; i <= Max ; i++)
        a[i] = false;
    a[0] = true;
    a[1] = true;
    for(ll i = 2 ; i*i <= Max ; i++){
        if(!a[i]){
            for(ll j = i*i ; j <= Max ; j += i)
                a[j] = true;
        }
    }
    for(ll i = 3 ; i <= Max ; i++)
        if(!a[i])
            vt.push_back(i);
}

int main() {
    fast
    sieve();
    ll _size = vt.size();
    for(ll i = 4 ; i <= Max ; i+=2){
        ll x, y;
        bool ff = false;
        for(ll j = 0 ; j < _size ; j++){
            x = vt[j], y = i - vt[j];
            ll _min = abs(x - y), tmp = x;
            if(i > x && !a[x] && !a[y] && (x%2) && (y%2)){
                ff = true;
                break;
            }

        }
        if(ff)
            f[i] = x;
    }

    cin >> t;

    while(t--){
        cin >> n;

        if(f[n] == 0){
            cout << "No" << endl;
        }else{
            ll x = f[n], y = n - f[n];
            if(x > y)
                swap(x,y);
            cout << n << " = " << x << " + " << y << endl;
        }
    }


    return 0;
}
