#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

ll isSum(ll a){
    ll n = (a * (a + 1)/2)%MOD;
    ll res = (n * (2 * a + 1) / 3) % MOD;
  //  ll res = ((a * (a + 1)/2)%MOD * (2 * a + 1) / 3)%MOD;
    return res%MOD;

}

ll isAbs(ll a){
    if(a < 0)
        return -a;
    return a;
}

int main()
{
    // n * (n + 1 ) * ( 2 * n + 1 ) / 6
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double a, b;

    cin >> a >> b;

    ll tmpA = ceil(a);
    ll tmpB = floor(b);

 //   cout << tmpA << " " << tmpB<< endl;

 //   ll resA = ((tmpA * (tmpA + 1)/2) %MOD * ( 2 * tmpA + 1 ) / 3) % MOD;
 //   ll resB = ((tmpB * (tmpB + 1)/2) %MOD * ( 2 * tmpB + 1 ) / 3) % MOD;
    ll resA = isSum(tmpA)%MOD;
    ll resB = isSum(tmpB)%MOD;


    tmpA = tmpA * tmpA % MOD;

    ll res = ((resB - resA)%MOD+ tmpA + MOD) % MOD;
 //   cout << res << endl << (resB - resA)%MOD << endl << ((resB - resA)%MOD+ tmpA + MOD)<<endl;
    cout << res%MOD;


    return 0;
}
