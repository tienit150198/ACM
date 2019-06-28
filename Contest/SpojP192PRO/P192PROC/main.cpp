#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll a[Max];

int main() {
    /*
    https://www.geeksforgeeks.org/sum-product-pairs-array-elements/?fbclid=IwAR3XjTNHhA8t3M5jvsndZlBpSQ--SMhxXi7nMSTHSys33ri6e9pcC5r039U
    We know that
    (a + b + c)2 = a2 + b2 + c2 + 2*(a*b + b*c + c*a)
    Let required sum be P
    Let E = (a1 + a2 + a3 + a4 ... + an)^2
    => E = a12 + a22 + ... + an2 + 2*(a1*a2 + a1*a3 + ....)
    => E = a12 + a22 + ... + an2 + 2*(P)
    => P = ( E - (a12 + a22 + .... + an2) ) / 2
    */
    fast
    cin >> n;
    ll _sum = 0, _sumArr = 0;
    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i];
        _sum += a[i]*a[i];
        _sumArr += a[i];
    }

    cout << (_sumArr*_sumArr - _sum)/2;

    return 0;
}
