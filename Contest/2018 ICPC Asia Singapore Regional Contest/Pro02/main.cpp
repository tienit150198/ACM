#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll _gcd(ll a, ll b) {
    if(a*b == 0)
        return (a + b);
    if(a > b) {
        return _gcd(b,a%b);
    } else
        return _gcd(a,b%a);
}

typedef struct ps {
    ll t,m;
} ps;
ll n;
ps operator+ (ps a, ps b) {
    ps res;

    res.t = a.t * b.m + a.m * b.t;
    res.m = a.m * b.m;
    return res;
}
ps operator- (ps a, ps b) {
    ps res;

    res.t = a.t * b.m - a.m * b.t;
    res.m = a.m * b.m;
    return res;
}
ps operator* (ps a, ps b) {
    ps res;

    res.t = a.t * b.t;
    res.m = a.m * b.m;
    return res;
}
ps operator/ (ps a, ps b) {
    ps res;

    res.t = a.t * b.m;
    res.m = a.m * b.t;
    return res;
}
ll t;

void chuan(ll &a, ll &b){
    if(a < 0 && b < 0){
        a = -a;
        b = -b;
    }
    else if(a < 0 || b < 0){
        b = abs(b);
        if(a > 0){
            a = -a;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--) {
        ps a, b, res;
        char c;
        cin >> a.t >> a.m >> c >> b.t >> b.m;
        if(c == '+') {
            res = a + b;
        }
        if(c == '-') {
            res = a - b;
        }
        if(c == '*') {
            res = a * b;
        }
        if(c == '/') {
            res = a / b;
        }
        ll uc = _gcd(abs(res.t), abs(res.m));
//        cout << uc << " " << res.t << " / " << res.m << endl;
        res.t /= uc;
        res.m /= uc;
        chuan(res.t,res.m);
        cout << res.t << " / " << res.m << endl;
    }
    return 0;
}
