#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
int main() {
    cin >> n;
    if(n == 1) {
        cout << 2;
        return 0;
    }
    ll x = (ll)sqrt(n);
    cout << ceil(n*1.0/x)+x;
    return 0;
}
