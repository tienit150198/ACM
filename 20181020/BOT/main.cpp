#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;

ll n;
ll a[Max];

struct m{
    ll l, r, val;
    m(){
        l = 0;
        r = 0;
        val = INT_MIN;
    }
};

m f[Max];

int main()
{
    ios::sync_with_stdio(false);
    freopen("BOT.INP","r",stdin);
    freopen("BOT.OUT","w",stdout);

    cin >> n;

    for(ll i = 1 ; i <= n; i++){
        cin >> a[i];
    }

    ll _max = INT_MIN;
    ll l = 0, r= 0;
    for(ll i = 1 ; i <= n; i++){
        _max += a[i];
        if(a[i] > _max){
            _max = a[i];
            l = i;
            r = i;
        }
        else
            r = i;

        f[i].val += a[i];
        if(f[i].val < _max){
            f[i].val = _max;
            f[i].l = l;
            f[i].r = r;
        }
    }

    l = 0, r =0;
    _max = INT_MIN;
    for(ll i = 1 ; i <= n; i++){
        if(_max < f[i].val){
            _max = f[i].val;
            l = f[i].l;
            r = f[i].r;
        }
    }

    cout << l << " " << r << " " << _max << endl;

    return 0;
}
