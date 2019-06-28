#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
struct m{
    ll w, h;
};

m a[Max];

bool isCheck(ll val){
    for(ll i = 1 ; i < n; i++){
        ll _min = min(a[i].h , a[i].w);
        ll _max = max(a[i].h , a[i].w);

        if(_max <= val){
            val = _max;
        }
        else if(_min <= val){
            val = _min;
        }
        else
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i].w >> a[i].h;

    ll tmp = a[0].w;
    ll tmp1 = a[0].h;
    bool flag = false, flag1 = false;

    flag = isCheck(tmp);
    flag1 = isCheck(tmp1);

    if(flag || flag1)
        cout <<"YES";
    else
        cout <<"NO";

    return 0;
}
