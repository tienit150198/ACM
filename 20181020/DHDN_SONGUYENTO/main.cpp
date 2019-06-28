#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void sieve(ll n){
    bool isPrime[n + 1];

    for(ll i = 0 ; i < n; i++){
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;

    ll tmp = sqrt(n);

    for(ll i = 2; i <= tmp ; i++){
        if(isPrime[i]){
            for(ll j = i * i;  j <= n ; j += i ){
                isPrime[j] = false;
            }
        }
    }

    for(ll i = 0 ; i < n; i++){
        if(isPrime[i])
            cout << i << endl;
    }
}

int main()
{

    return 0;
}
