#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n,x,y;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> x >> y;

    float p = n * y /(float)100;
    if((float)p > (ll)p)
        p = (ll)p + 1;

    y = p;
    cout << max(y-x,0*1LL);

    return 0;
}
