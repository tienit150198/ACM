#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
#define ipair pair<ll,ll>
using namespace std;
ll f[Max];
ipair path[Max];

bool isCheck(ll a){
//    ll a[] = {1,2,5,10,20,50,100,200,500};
    if(a == 1 || a == 2 || a == 5 || a == 10 || a == 20 || a == 50 || a == 100 || a == 200 || a == 500)
        return true;
    return false;
}

ll b[Max];
ll numB = 0;

void truyvet(ll a[], ll x, ll y){
    if(x == 0 || y == 0)
        return;

    if(isCheck(x))
        b[numB++] = x;
    if(isCheck(y))
        b[numB++] = y;

    truyvet(a,path[x].first, path[x].second);
    truyvet(a,path[y].first, path[y].second);

}

int main() {
    ios::sync_with_stdio(false);
    ll x;
    cin >> x;

    for(ll i  =0 ; i <= x ; i++) {
        f[i] = INT_MAX;
        path[i].first = 0;
        path[i].second = 0;
        b[i] = 0;
    }


    ll a[] = {1,2,5,10,20,50,100,200,500};
    f[0] = 0;

    for(ll i = 1; i <= x ; i++) {
        ll j = 0;
        while(a[j] <= i && j <= 8) {
            ll tmp = f[i - a[j]];
            if(tmp + 1 < f[i]) {
                f[i] = tmp + 1;
                path[i].first = a[j];
                path[i].second = i - a[j];
            }
            j++;
        }
    }
    cout << f[x] << endl;

    truyvet(a, path[x].first, path[x].second);
    if(numB == 0){
        cout << x;
        return 0;
    }

    sort(b,b+numB, greater<ll>());
    for(ll i = 0 ; i < numB; i++)
        cout << b[i] << " ";

    return 0;
}
