#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll a[Max];

void sieve(ll n){
    ll isSquare[n + 1];
    for(ll i = 0;  i <= n; i++)
        isSquare[i] = 0;

    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n/i; j++){
            isSquare[i*j] += i;
        }
    }

    ll j = 0;
    for(ll i = 0 ; i <= n; i++){
        a[i] = isSquare[i];
    }
}
//NKABD
//https://vn.spoj.com/problems/NKABD/fbclid=IwAR3laOYRyNNW06oM-VdDJXKGxeF8RHYB2VH0r6hZYgX4CZgJezQB3hIvNoU
int main()
{

    ll l, r;
    cin >> l >> r;
    sieve(r);
    ll res = 0;
    for(ll i = l; i <= r ; i++){
        if(a[i] - i > i)
            res++;
    }
    cout << res;

    return 0;
}
