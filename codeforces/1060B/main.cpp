#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, a, b, ans = 0;

ll isDigit(ll n){
    ll res = 0;
    while(n > 0){
        res += n%10;
        n /= 10;
    }
    return res;
}

ll count(ll n){
    ll c = 0;

    while(n > 0){
        c++;
        n /= 10;
    }
    return c;
}

int main() {
    cin >> n;

    ll c = count(n);
    a = pow(10,c-1) - 1;
    b = n - a;

    ans = ans + isDigit(a) + isDigit(b);

    cout << ans;
    return 0;
}
