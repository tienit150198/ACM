#include <bits/stdc++.h>
#define ll long long int
#define Max 107
using namespace std;
ll n;
struct m {
    ll s, t;
};
bool cmp(m a, m b) {
    if(a.s < b.s)
        return true;
    if(a.t < b.t)
        return true;
    return false;
}


m a[Max];
int main() {
    ios::sync_with_stdio(false);
    cin >> n;
//    cout << n;
    for(ll i = 0 ; i < n; i++) {
        cin >> a[i].s >> a[i].t;
    }

    sort(a,a+n, cmp);
      for(ll i = 0 ; i < n; i++){
          cout << a[i].s << " " << a[i].t << endl;
      }

    return 0;
}
