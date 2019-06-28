#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll l, r;

int main() {
    ios::sync_with_stdio(false);
    cin >> l >> r;

    cout << "YES" << endl;
    for(ll i = l ; i <= r ; i += 2){
        cout << i << " " << i + 1 << endl;
    }

    return 0;
}
