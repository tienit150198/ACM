#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll t,x,s;


int main() {
    ios::sync_with_stdio(false);
    cin >> t >> x >> s;
    if(s == t || s <= x + t){
        ll tmp = x + t;
        if(s == t ||s == tmp || s == tmp + 1)
            cout << "YES";
        else
            cout << "NO";
        return 0;
    }
    ll l = 1, r = s / x + 1, m = (l + r) / 2;
    while(l +1 < r){
        m = (l + r) / 2;
        if(t + m*x > s){
            r = m;
        }
        else
            l = m;
    }

    if(l > r)
        swap(l,r);

    ll ans = l * x + t;


    if(s == ans || s == ans + 1){
        cout << "YES";
    }
    else
        cout << "NO";


    return 0;
}
