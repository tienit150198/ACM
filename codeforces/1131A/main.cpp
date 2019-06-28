#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll h1,w1, h2,w2;

int main() {
    fast
    cin >> w1 >> h1 >> w2 >> h2;

    ll s = (h1+h2+2)*(w1+2);
    ll t =(w1-w2)*h2;
    ll t1 = (w1*h1 + w2*h2);

    cout << s - t - t1;

    return 0;
}
