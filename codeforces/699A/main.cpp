#include <bits/stdc++.h>
#define ll long long int
#define Max 200007
#define pb push_back

using namespace std;

ll n;
string str;
struct m {
    ll val;
    char _move;
};

bool cmp(m a, m b) {
    return a.val < b.val;
}

m a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;

    for(ll i = 0 ; i < n; i++) {
        cin >> a[i].val;
        a[i]._move = str[i];
    }

    sort(a,a+n,cmp);
    ll indx1 = 0, indx2 = 0, _min = INT_MAX;
    ll i = 0;

    while(i < n - 1){
        if(_min > (a[i+1].val - a[i].val) && (a[i+1]._move == 'L') && (a[i]._move == 'R')) {
            indx1 = a[i].val;
            indx2 = a[i+1].val;
            _min = a[i+1].val - a[i].val;
        }
        i++;
    }
    if(_min != INT_MAX)
        cout << abs(indx2 - indx1) / 2;
    else
        cout << -1;

    return 0;
}
