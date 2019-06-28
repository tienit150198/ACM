#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll ans = 0;

bool isPrime(ll a){
    if(a < 2)
        return false;

    ll tmp = sqrt(a);

    for(ll i = 2 ; i <= tmp ; i++){
        if(!(a%i))
            return false;
    }
    return true;
}

int main() {
    fast
    cin >> n;

    for(ll i = 2 ; i <= n ; i++){
        if(isPrime(i))
            ans++;
    }
    cout << ans;


    return 0;
}
