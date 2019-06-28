#include <bits/stdc++.h>
#define ll long long int
#define fl float
#define db double
#define ldb long double
#define PI 3,1415926535897
#define For(i,x,n) for(int i=x;i<=n;i++)
#define Forn(i,x,n) for(int i=n;i>=x;i--)
#define pb push_back
#define pob pop_back
#define MAX 1000007
#define MOD 1000000007
#define debug(a,vt,n) for(int i=vt;i<=n;i++){ cout << a[i] << " ";}
#define bg begin()
#define is(a) insert(a)
#define fall(x,a) for(x=a.bg;x!=a.end();x++)
#define _bum int main
#define  _You_cannot_answer_the_conversation return 0;
#define all(a) a.bg,a.end()
using namespace std;

ll n;
map<ll,ll> ismap;
int main() {
    cin >> n;

    ll ans = 0;
    ll _min = INT_MAX, _max = 0;
    for(int i = 0 ; i < n ; i++) {
        ll x;
        cin >> x;
        ismap[x]++;

        _max = max(_max,ismap[x]);
        _min = min(_min,ismap[x]);



    }


    return 0;
}
