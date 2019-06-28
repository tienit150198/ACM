#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll a[6][3] = {1,2,3,
            2,1,3,
            2,3,1,
            3,2,1,
            3,1,2,
            1,3,2};
ll n, x;
int main() {
    fast
    cin >> n >> x;

    n %= 6;
    cout << a[n][x]-1;

    return 0;
}
