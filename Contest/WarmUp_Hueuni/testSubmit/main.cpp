#include <bits/stdc++.h>
#define limit 1000000000000000
#define ll long long int

using namespace std;

ll slove(ll n){
    ll res = 0;
    while(n > 0){
        res += (n%10);
        n /= 10;
    }
    return res;
}

void slove1(ll t, ll &a, ll &b){
    a = t%7;
    b = 7 - a;
    if((t/7)%2 == 0)
        swap(a,b);

}

int main()
{
    ll t;
    cin >> t;
   // cout << slove(t);


    ll a, b;
    slove1(t,a,b);
    cout << a << " " << b;
    return 0;
}
