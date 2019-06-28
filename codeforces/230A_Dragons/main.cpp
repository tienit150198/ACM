#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, m;

struct t{
    ll x, y;
};

t a[100000];

bool cmp(t a, t b){
    if(a.x < b.x)
        return true;
    if(a.x == b.x && a.y > b.y)
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(ll i = 0 ; i < m; i++){
        cin >> a[i].x >> a[i].y;
    }
    ll i;

    sort(a,a+m,cmp);


    for(i = 0 ; i < m; i++){
        if(n > a[i].x){
            n += a[i].y;
        }
        else{
            cout <<"NO";
            return 0;
        }
    }
    cout <<"YES";

    return 0;
}
