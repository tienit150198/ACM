#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
using namespace std;

ll n;

int main() {
    cin >> n;
    if(n <= 2) {
        cout << "No";
        return 0;
    }
    cout << "Yes" << endl;
    ll temp = 2;

    ll sum = (n * (n + 1))/2;
    ll can = (ll)sqrt(sum);
    FOR(i, 2, can) {
        if(sum % i == 0) {
            temp = i;
            break;
        }
    }

    cout << 1 << " " << temp << endl;
    cout << n - 1 << " ";
    FOR(i, 1, n) {
        if(i != temp) {
            cout << i << " ";
        }
    }

    return 0;
}
