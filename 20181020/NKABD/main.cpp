#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;

ll l, r;
ll a[Max];

void sieve(ll n){
    ll isSquare[n + 1];

    for(ll i = 0 ; i <= n; i++)
        isSquare[i] = 0;

    isSquare[0] = 0;
    for(ll i = 1 ; i <= n ; i++){
        for(ll j = 1 ; j <= n/i ; j++){
            isSquare[i*j] += i;
        }
    }
    for(ll i = 1 ; i <= n; i++){
        a[i] = isSquare[i];
    }
}

int main()
{
    cin >> l >> r;
    ll count = 0;
    sieve(r);
    for(ll i = l ; i <= r; i++){
        if(a[i] - i > i)
            count++;
    }

    cout << count;

    return 0;
}
