#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
struct m {
    ll val, indx, _rank;
};
m a[3000];

bool cmpIndx (m a, m b) {
    return a.indx < b.indx;
}

bool cmpVal (m a, m b) {
    return a.val > b.val;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i  < n; i++) {
        cin >> a[i].val;
        a[i].indx = i;
    }

    sort(a,a+n,cmpVal);

    ll c = 1;
    ll _rank = 1;
    a[0]._rank = _rank;
    for(ll i = 1 ; i < n; i++) {
        if(a[i].val == a[i - 1].val) {
            a[i]._rank = _rank;
            c++;
        } else {
            a[i]._rank = _rank + c;
            _rank += c;
            c = 1;
        }
    }
    sort(a,a+n,cmpIndx);

    for(ll i = 0 ; i < n; i++)
        cout << a[i]._rank << " ";

    return 0;
}
