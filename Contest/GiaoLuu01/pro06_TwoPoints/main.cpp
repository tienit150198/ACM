#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

struct m{
    ll bg, en, total;
};

bool cmp(m a, m b){
    if(a.bg < b.bg)
        return true;
    if(a.bg == b.bg && a.en < b.en)
        return true;
    return false;
}

m a[Max];
ll n;

int main() {
    cin >> n;

    for(ll i = 0 ; i < n ; i++)
        cin >> a[i].bg;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i].en;
        a[i].total = a[i].bg + a[i].en;
    }

    sort(a,a+n,cmp);

    /*for(ll i = 0 ; i < n ; i++){
        cout << a[i].bg << " " << a[i].en << endl;
    }*/
    ll ans = 0;
    for(ll i = 0 ; i < n; i++){
        ll x = a[i].total;
        ans++;

        ll j = i + 1;

        while(j < n && x <= a[j].bg){
            x = a[j].total;
            j++;
        //    ans++;
        }

        i = j-1;
    }
    cout << ans;


    return 0;
}
