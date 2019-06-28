#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll y, b, p;

int main() {
    fast
    cin >> y >> b >> p;

    b = min(p-1,b);
    b = min(y+1,b);

    cout << b*3;

    return 0;
}
