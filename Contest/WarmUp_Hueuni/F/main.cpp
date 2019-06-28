#include <bits/stdc++.h>
#define ll long long int
#define Max 50007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
const double _exp = 1e-6;

ll n;
ll a[Max];
double rr, ans;

bool isCheck(ll rx, ll x) {
    ll i = 0;
    while(i < n - 1) {
        if(a[i] <= x && a[i + 1] >= x){
            break;
        }
        i++;
    }

    ll l = i, r = i + 1, u, v;
    double tt = (a[r] - x), tt1 = (x - a[l]);
    double testTmp = rx;

    if(tt <= testTmp && tt1 <= testTmp) {
        u = a[l], v = a[r];
        l--, r++;
        testTmp = testTmp - 1;
    }

    while(l >= 0 && r < n) {
        tt = (a[r] - v);
        tt1 = (u - a[l]);
        if(tt <= testTmp && tt1 <= testTmp) {
            u = a[l], v = a[r];
            l--, r++;
            testTmp = testTmp - 1;
            continue;
        }
        break;
    }

    if(l >= 0) {
        while(l >= 0) {
            tt1 = (u - a[l]);
            if(tt1 <= testTmp){
                u = a[l];
                l--;
                testTmp = testTmp - 1;
                continue;
            }
            break;
        }
    }else if(r < n){
        while(r < n){
            tt = (a[r] - v);
            if(tt <= testTmp){
                v = a[r];
                r++;
                testTmp = testTmp - 1;
                continue;
            }
            break;
        }
    }

    if(l < 0 && r >= n){
        if(testTmp + _exp <= 0 || testTmp - _exp <= 0){
            return true;
        }
    }
    return false;
}

bool isCheck1(ll x){
    for(ll i = 0 ; i < n -1 ; i++){
        ll u = a[i], v = a[i + 1];

        if(u == x){
            if(i > 0){
                u = a[i - 1];
            }
        }
        else if(v == x){
            if(i + 2 < n){
                v = a[i + 2];
            }
        }
        ll kc = abs(u - v);
        if(kc > 2*x + 1)
            return false;
    }
    return true;
}

int main() {
    fast
    cin >> n;
    double l = INT_MAX, r = INT_MIN;
    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i];
        r = max(r,(double)a[i]);
        l = min(l,(double)a[i]);
    }
    sort(a,a+n);

    ll mid = (l + r) / 2;
    vector<ll> vt;
    while(r - l + _exp > 0) {
        mid = (l + r) / 2;

        if(isCheck1(mid)) {
            vt.push_back(mid);
//            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }

    sort(vt.begin(), vt.end());

    ll _max = INT_MIN, bg, en;
    for(ll i = 0 ; i < n-1 ; i++){
        if(abs(a[i] - a[i+ 1]) > _max){
            _max = abs(a[i] - a[i+ 1]);
            bg = i;
            en = i + 1;
        }
    }

    for(ll i = 0 ; i < vt.size() ; i++){
        ll x = vt[i];

        if(isCheck(x,x+a[bg]) || isCheck(x,x + a[en])){
            cout << fixed << setprecision(1) << vt[i]*1.0;
            return 0;
        }
    }

    cout << fixed << setprecision(1) <<vt[vt.size() - 1]*1.0;

    return 0;
}
