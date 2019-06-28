#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll x, y, z;

int main() {
    fast
    cin >> x >> y >> z;

    y = min(z-1,y);
    y = min(x+1,y);

    cout << y*3;

    return 0;
}
