#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPrime(ll a){
    if(a < 2)
        return false;
    ll tmp = sqrt(a);
    for(ll i = 2 ; i <= tmp ; i++)
        if(!(a%i))
            return false;
    return true;
}

bool isCheck(ll a){
    ll s = 0;
    while(a > 0){
        s = s
    }
}

int main()
{
    ios::sync_with_false(false);
    ll t;
    cin >> t;
    while(t--){
        ll n,tmp;
        cin >> n >> tmp;
        if(isPrime(n) || isCheck(n)){
            cout << tmp << " " << n << " NO" << endl;
        }
        else
            cout << tmp << " " << n << " YES" << endl;
    }


    return 0;
}
