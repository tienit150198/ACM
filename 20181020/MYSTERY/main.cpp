#include "bits/stdc++.h"
#define ll long long int
#define MOD 20122007
#define MN 100005

using namespace std;

ll power(ll a, ll n, ll k){
    if(n == 1)
        return a%k;
    ll res = power(a,n/2,k)%k;
    res = (res * res)%k;
    if(n%2)
        res = (res * a)%k;
    return res%k;
}
bool isSquare(ll a){
    ll tmp = sqrt(a);
    return tmp*tmp == a;
}

int main(){
	ll n;
	cin >> n;

	ll j = (ll) sqrt(n);
	ll res = 1;
	for(ll i = 1 ; i <= j; i++){
        if(!(n%i)){
            res *= power(3,i,MOD) - 1;
            res %= MOD;

            if(n/i != i){
                res *= power(3,n/i,MOD)-1;
                res %=MOD;
            }
        }
	}

	cout << res % MOD;
	return 0;
}
