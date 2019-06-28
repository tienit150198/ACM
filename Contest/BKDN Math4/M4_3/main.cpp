#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll gcdExtend(ll a, ll b, ll &x, ll &y) {
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = gcdExtend(b, a%b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

ll modInverse(ll b, ll m) { // ( b * x ) % m == 1
    ll x, y;
    ll g = gcdExtend(b,m,x,y);
    if(g != 1)
        return -1;  // no solution
    return (x%m + m) % m;
}

ll modDivice(ll a, ll b, ll m){ // (b * c) % m = a % m.
    a %= m;
    ll inv = modInverse(b,m);
    if(inv == -1)
        return -1;
    return (inv * a) % m;

}

ll pow(ll a, ll n) {
    if(n == 0)
        return 1;
    if(n == 1)
        return a;
    ll t = pow(a,n/2);
    t *= t;
    if(n%2)
        t = t * a;

    return t;
}

ll powMod(ll a, ll n, ll m) {
    if(n == 0)
        return 1%m;
    if(n == 1)
        return a%m;
    ll t = powMod(a,n/2,m) % m;
    t = (t * t) % m;

    if(n % 2)
        t = (t * a) % m;

    return t%m;
}

ll powMod2(ll a, ll n, ll m) {
    ll res = 1;
    for(ll i = n ; i ; i >>= 1) {
        if(i & 1)
            res = (res * a) % m;
        a = (a * a) % m;
    }
    return res;
}

ll phiEuler(ll n) {
    ll res = n;

    for(ll i = 2 ; i * i <= n ; i++) {
        if(n%i == 0) {
            while(n % i == 0)
                n /= i;
            res -= (res / i);
        }
    }

    if(n != 1)
        res -= (res / n);
    return res;

}
string str1 = "vietdo781";
int _count = 0;
void print(string str, ll a[], ll n){
    string s = "";

    for(ll i = 0 ; i < n -1 ; i++){
    //    cout << a[i];
        s += str[i];
        if(a[i+1] == 1){
            s += '.';
            continue;
        }
        if(str1[i] == '.')
            s += '.';
    }
  //  cout << a[n-1] << endl;
    s += str[n-1];
    cout << s + "@gmail.com" << endl;
}
void gen(){
    ll a[20], n;
    string str = "";
    for(ll i = 0 ; i < str1.size() ; i++)
        if(str1[i] != '.')
            str += str1[i];

    n = str.size();
    for(ll i = 0 ; i < n ; i++)
        a[i] = 0;

    ll i = n - 1;
    while(true){
        print(str,a,n);
        i = n - 1;

        while(i >= 0 && a[i] == 1)
            i--;
        if(i < 0)
            break;
        a[i]++;
        for(ll j = i + 1 ; j < n ; j++)
            a[j] = 0;
        _count++;
        if(_count > 1000000)
            break;
    }

}
int main() {
    fast
    freopen("mail.out", "w", stdout);
    gen();


    return 0;
}
/*
double pi = 8 * 100.0/13;
	cout << fixed << setprecision(6) << pi <<endl;
    làm tròn
*/
