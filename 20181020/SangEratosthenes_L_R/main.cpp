#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n,m;
ll Prime[100000007];

ll isMax(ll a, ll b){
    return a > b ? a : b;
}

void Segmented_sieve(ll l, ll r){
    bool isPrime[r - l + 1];
    for(ll i = 0 ; i <= r - l ; i++)
        isPrime[i] = true;

    ll tmp = sqrt(r);
    for(ll i = 2; i <= tmp ; i++){
      //  cout << l + i - 1 <<" " <<((l + (i - 1)) / i * i) << " " << i * i << endl;    // lay vi tri L
        for(ll j = isMax(i * i, (l + (i - 1)) / i * i); j <= r; j += i){
            isPrime[j - l] = false;
        }
    }
    ll j = 0;
    for(ll i = isMax(l,2) ; i <= r; i++){
        if(isPrime[i - l]){
            cout << i << endl;
     //     a[j++] = i;
        }

    }
}

int main()
{
    //PRIME1 SPOJ
    // https://www.spoj.com/problems/PRIME1/

    ll t;
    cin >> t;

    while(t--){
        cin >> m >> n;

        Segmented_sieve(m,n);

     //   for(ll i = 0)


    }


    return 0;
}
