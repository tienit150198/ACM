#include <bits/stdc++.h>
#define ll long long int
#define Max 200007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll k, l;

int main() {
    fast
    cin >> k >> l;
    ll s = 0;

    while(l > k && l % k == 0) {
        s++;
        l /= k;
    }

    if(l != k) {
        cout << "NO";
    } else {
        cout << "YES" << endl << s;
    }

    return 0;
}
