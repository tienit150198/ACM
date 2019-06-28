#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;

map<ll,ll> t;
ll res = 0;

ll giaithua(ll a){
    ll p = 1;
    for(ll i = 1 ; i <= a; i++){
        p *= i;
    }
    return p;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll tmp;
    ll bd = INT_MAX, kt = INT_MIN;
    for(ll i = 0; i < n; i++){
        cin >> tmp;
        bd = min(tmp,bd);
        kt = max(kt,tmp);
        t[tmp]++;
    }

    for(ll i = bd ; i <= kt; i++){
        if(t[i] >= 2 && t[i*2]){
            res += giaithua(t[i]);
        }
        else
            for(ll j = i+1 ; j <= kt ; j++){
                if(t[i] && t[j] && t[i + j]){
                //        cout << i << " " << t[i] << endl;
                //        cout << j << " " << t[j] << endl;
                    ll tmp = t[i] + t[j];
                    if(tmp > 2)
                        res += tmp * 2;
                    else
                        res += tmp;
                }
            }
    }
    cout << res;


    return 0;
}
