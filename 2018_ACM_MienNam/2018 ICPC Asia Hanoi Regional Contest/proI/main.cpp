#include <bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
using namespace std;
ll n;
string s;
ul lengS = 0, lengC = 0;
ul res = 0, tmp = 0;
ul _pow(ll a, ll n){
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;
    if(n == 1)
        return a;
    ul res = _pow(a,n/2);
    res = res * res;
    if(n%2)
        res *= a;
    return res;
}
vector<ll> t;

void out(ll a[], ll n){
    for(ll i = 0 ; i < n; i++){
        cout << a[i];
    }
    cout << endl;
}

void gen(string s, ll n){
    for(ll i = 0 ; i < n; i++){
        if(s[i] == '*')
            s[i] = '0';
    }
    ll i = n - 1;
    ll res = 0;
    while(true){
        res++;
        i = n - 1;
        out(a,n);
        while(i >= 0 && a[i] == 1)
            i--;
        if(i < 0)
            break;

        a[i] = 1;

        for(ll j = i + 1; j < n; j++)
            a[j] = 0;
    }
    cout<< res << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> s;
    ll a[n+1];
    gen(a,n);


    return 0;
}
