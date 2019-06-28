#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct m{
    ll a, b;
};

bool cmp(m a, m b){
    if(a.a < b.a){
        return true;
    }
    if(a.a == b.a && a.b > b.b)
        return true;
    return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, c;
    cin >> n >> c;

    m a[n];
    for(ll i = 0 ; i < n; i++){
        cin >> a[i].a >> a[i].b;
    }

    sort(a,a+n,cmp);
    ll res = 0;
    ll i = 0;
    while(i < n){
        if(a[i].a <= c){
            c+= a[i].b;
            res++;
            i++;
        }
        else
            break;
    }
    cout << res;

    return 0;
}
