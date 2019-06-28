#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll a, b;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    cin >> a >> b;
    ll s = a*b;
    ll x = gcd(a,b);
    cout << s/x;

    return 0;
}
