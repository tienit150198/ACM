#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    ll a, b;
    cin >> a >> b;

    cout << gcd(a,b);

    return 0;
}
