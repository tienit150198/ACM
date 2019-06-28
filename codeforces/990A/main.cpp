#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n,m,a,b;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m >> a >> b;

    if(n%m == 0) {
        cout << 0;
        return 0;
    }

    if(n > m) {
        ll tmp = (n%m) * b;
        ll tmp1 = (m - (n % m)) * a;
        cout << min(tmp,tmp1);
        return 0;
    }

    ll tmp = n * b;
    ll tmp1 = (m - n) * a;
    cout << min(tmp,tmp1);

    return 0;
}
