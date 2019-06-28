#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll n, m;
struct t {
    ll l, r, total;
};

t a[Max];

bool cmp(t a, t b) {
    return a.total > b.total;
}

int main() {
    fast
    cin >> n >> m;

    for(ll i = 0 ; i < m ; i++) {
        cin >> a[i].l >> a[i].r;
        if(a[i].l > n)
            a[i].l = n;
        if(a[i].r > n)
            a[i].r = n;
        if(a[i].l > a[i].r)
            swap(a[i].l, a[i].r);
        a[i].total = abs(a[i].r - a[i].l) + 1;
    }

    if(m < 3) {
        cout << 0;
        return 0;
    }

    sort(a,a+m,cmp);

    ll ans = a[0].total;
    ll _min = a[0].l, _max = a[0].r;
    a[0].total = 0;
    a[0].l = 0;
    a[0].r = 0;
//    ll total = 1, c = 1;
    for(ll i = 1 ; i < m-2; i++) {
        ll j = 1;
        while(j < m) {
            ll xx = -1, yy = -1;
            if(a[j].l == 0 && a[j].r == 0 && a[j].total == 0) {
                j++;
                continue;
            }
            if((a[j].l >= _min && a[j].r <= _max)) {
                a[j].total = 0;
                a[j].l = 0;
                a[j].r = 0;
//                total++;
                j++;
                continue;
            }
            if(a[i].l == a[i].r) {
                if(a[i].l == _max || a[i].l == _min) {
                    a[j].total = 0;
                    a[j].l = 0;
                    a[j].r = 0;
                    j++;
                    continue;
                }
            }
            if(a[j].l >= _max && a[j].r > _max) {
                if(a[j].l == _max) {
                    xx = a[j].l + 1;
                    a[j].l = xx;
                }
                if(xx == -1)
                    xx = a[j].l;
                if(yy == -1)
                    yy = a[j].r;

                a[j].total = abs(xx - yy) + 1;
            }
            if(a[j].l < _min && a[j].r <= _min) {
                if(a[j].r == _min) {
                    yy = a[j].r - 1;
                    a[j].r = yy;
                }
                if(xx == -1)
                    xx = a[j].l;
                if(yy == -1)
                    yy = a[j].r;
                a[j].total = abs(xx - yy) + 1;
            }
            if(a[j].l >= _min && a[j].r > _max && a[j].l < _max) {
                xx = max(a[j].l, _max+1);
                a[j].l = xx;
//                xx = _max+1;
                if(xx == -1)
                    xx = a[j].l;
                if(yy == -1)
                    yy = a[j].r;
                a[j].total = abs(xx - yy) + 1;
            }
            if(a[j].l < _min && a[j].r <= _max && a[j].r > _min) {
                yy = min(a[j].r, _min-1);
                a[j].r = yy;
                if(xx == -1)
                    xx = a[j].l;
                if(yy == -1)
                    yy = a[j].r;
                a[j].total = abs(xx - yy) + 1;
            }
            if(a[j].l < _min && a[j].r > _max) {
                xx = _min - a[j].l;
                a[j].l = min(a[j].l, _min);
                yy = a[j].r - _max;
                a[j].r = max(a[j].r, _max);

                a[j].total = xx + yy;
            }
            j++;
        }

        j = 1;
        ll indx = 0, _maxTotal = 0;
        while(j < m) {
            if(a[j].total > _maxTotal) {
                _maxTotal = a[j].total;
                indx = j;
            }
            j++;
        }

        ans += _maxTotal;
        _max = a[indx].r;
        _min = a[indx].l;
        a[indx].total = 0;
        a[indx].l = 0;
        a[indx].r = 0;
//        c++;
//        total++;
    }

    cout << min(ans,n);

    return 0;
}
