#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;
ll t;
ll l, r;
ll a[Max];

void sang(){
    ll Prime[Max];
    ll n = Max;
    for(ll i = 0 ; i  < Max ; i++){
        Prime[i] = true;
    }
    Prime[0] = false;
    Prime[1] = false;
    ll tmp = sqrt(Max);
    for(ll i = 2; i <= tmp ;i++){
        if(Prime[i]){
            for(ll j = i*i; j <= Max; j += i){
                Prime[j] = false;
            }
        }
    }
    ll j = 0;
    for(ll i = 0 ; i <= Max ;i++){
        if(Prime[i])
            a[j++] = i;
    }
}

int main()
{
    sang();
    ll res = 0;
    cin >> t;
    while(t--){
        res = 0;
        cin >> l >> r;
        ll i = 0;
        while(a[i] <= r && i <= r){
            if(a[i] >= l && a[i]<= r)
                res++;
            i++;
        }
        cout << res << endl;
    }

    return 0;
}
