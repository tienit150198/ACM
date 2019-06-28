#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll a, b, s;

int main() {
    ios::sync_with_stdio(false);
    cin >> a >> b >> s;

    ll t =abs(a) + abs(b);
    if(t > s || (t - s) % 2) {
        cout << "No";
        return 0;
    }

    cout << "Yes";

    return 0;
}
