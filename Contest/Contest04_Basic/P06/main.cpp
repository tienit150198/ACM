#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(ll a){
    if(a < 2)
        return false;
    ll tmp = sqrt(a);
    for(ll i = 2 ; i <= tmp ; i++){
        if(a%i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    ll a[n + 1];
    for(ll i = 0 ; i < n; i++)
        cin >> a[i];

    for(ll i = 0 ; i < n; i++){
        if(isPrime(a[i]))
            cout << a[i] << " ";
    }


    return 0;
}
