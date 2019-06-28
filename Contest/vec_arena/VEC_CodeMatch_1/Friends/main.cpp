#include<bits/stdc++.h>
#define Max 300007
#define ll long long int
using namespace std;
struct m {
    ll h, l;
};
ll n;
m a[Max];

bool cmp(m a, m b) {
    if(a.h < b.h)
        return true;
    if(a.h == b.h && a.l > b.l)
        return true;
    return false;
}

int main() {
    cin >> n;
    ll res = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i].l >> a[i].h;
    }
    sort(a,a+n,cmp);
    for(int i = 0; i < n ; i++)
        cout << a[i].l << " " << a[i].h << endl;

    for(int i = 0 ; i < n ; i++) {
        ll c = 0, _minHight= INT_MAX;
        ll j = i;
        _minHight = a[j].h;
        while(j < n && c < _minHight) {
            c++;
            j++;
            _minHight = min(a[j].h, _minHight);
        }

        i = j - 1;

        res = max(res,c);

    }
    cout << res;

    return 0;
}
