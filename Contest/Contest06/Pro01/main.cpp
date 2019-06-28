#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a, b;

ll gcdExtended(ll a, ll b, ll &x, ll &y){
    if(a == 0){
        x = 0;
        y = 1;
        return b;
    }

    ll x1, y1;
    ll gcd = gcdExtended(b%a,a,x1,y1);

    x = y1 - (b/a) * x1;
    y = x1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> a >> b;
    ll x, y;
    ll gcd = gcdExtended(a,b, x, y);
//    cout << gcd << endl;
    if(x > y)
        swap(x,y);
    cout << x << " " << y;


    return 0;
}
