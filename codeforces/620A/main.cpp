#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll x[2], y[2];

ll isMax(ll x[], ll y[]){
    ll tmp = abs(x[0] - x[1]);
    ll tmp1 = abs(y[0] - y[1]);

    return max(tmp,tmp1);
}

int main() {
    ios::sync_with_stdio(false);
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];

    cout << isMax(x,y);

    return 0;
}
