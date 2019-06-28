#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n;
ll a[10007], t[10007];

void init(){
    for(ll i = 0; i < 10007; i++){
        a[i] = 0;
        t[i] = 0;
    }
}

int main()
{
    cin >> n;

    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
    }

    ll _max = 0;
    for(ll i = 0 ; i < n; i++){
        _max = 0;
        for(ll j = 0; j < i ; j++){
            if(a[i] > a[j])
                _max = max(_max,t[j]+1);
        }
        t[i] = max(t[i],_max);
    }
    _max = t[0];
    for(ll i = 0 ; i < n; i++)
        _max  = max(_max,t[i]);

    cout << _max+1;

    return 0;
}
