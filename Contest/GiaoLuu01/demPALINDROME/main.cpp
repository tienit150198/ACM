#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll t, l, r;
ll a[Max], f[Max];

ll power(ll a, ll n) {
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

ll slove(ll l, ll r){
    ll ans = 0;
    if(l > r)
        swap(l,r);
    if(l == 0)
        l++, ans++;
    ll cl = log10(l) + 1, cr = log10(r) + 1;
    ans = ans + (f[cr - 1] - f[cl-1]);

    ll x = l - power(10,cl-1), y = r - power(10,cr-1);
    if(x){
        if(cl <= 2){
            ans = ans - x;
        }else
            ans = ans - x * power(10,(cl-3)/2);
    }

    if(y){
        if(cr <= 2){
            ans = ans + y;
        }else
            ans = ans + y * pow(10,(cr-3)/2);
    }

    return ans;
}

int main() {
    cin >> t;
    for(ll i = 1 ; i <= 17 ; i++){
        if(i <= 2)
            a[i] = 9;
        else{
            ll x = i - 2;
            a[i] = power(10,(x+1)/2)*9;
        }
        f[i] = a[i] + f[i - 1];
    }

  /*  for(ll i = 1 ; i <= 17 ; i++)
        cout << i << " -> " << f[i] << endl;
*/
    while(t--){
        cin >> l >> r;
        cout << slove(l,r) << endl;
    }


    return 0;
}
