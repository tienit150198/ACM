#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    while(n--) {
        ll k, x;
        cin >> k >> x;
        cout <<  x + ( k - 1) * 9 << endl;
    }
    return 0;
}
