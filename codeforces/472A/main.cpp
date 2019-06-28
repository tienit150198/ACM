#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

bool isPrime(ll a){
    if(a < 2)
        return false;
    ll _sqrt = sqrt(a);

    for(ll i = 2 ; i <= _sqrt ; i++)
        if(!(a%i))
            return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    ll a, b;

    a = n / 2 ;
    b = n - a;

    while(true){
        if(isPrime(a)){
            a++;
            b--;
        }
        if(isPrime(b)){
            b--;
            a++;
        }

        if(!isPrime(a) && !isPrime(b))
            break;
    }

    cout << a << " " << b;

    return 0;
}
