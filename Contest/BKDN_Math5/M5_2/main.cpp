#include <bits/stdc++.h>
#define ll long long int
#define Max 200
using namespace std;

ll n;
ll f[Max];

ll isPow(ll a, ll n){
    if(n == 0)
        return 1;
    if(n == 1)
        return a;
    ll res = isPow(a,n/2);
    res *= res;
    if(n%2)
        res *= a;
    return res;
}

int main()
{
    f[0] = 0;
    f[1] = 1;
    for(ll i = 2 ; i <= 100 ; i++){
        f[i] = f[i-1]*2 + 1;
    }

    for(ll i = 0 ; i <= 100 ; i++)
        cout << i << " -> " << f[i] << endl;


    return 0;
}
