#include <bits/stdc++.h>
#define ll long long int
#define Max 42000007
#define limit 2500007
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

    ll i = 1;
    while(i < min(_size,limit*1LL)){
        f[i] = f[i - 1] + vt[i - 1];
        i++;
    }

    while(i <= limit){
        f[i] = f[i - 1];
        i++;
    }

    cin >> t;

    while(t--){
        cin >> n;
        cout << f[n] << endl;

    }

    return 0;
}
