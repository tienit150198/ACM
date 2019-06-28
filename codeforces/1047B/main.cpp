#include <bits/stdc++.h>
#define ll long long int
#define Max 5000
#define ipair pair<string,string>

using namespace std;

ll n, x, y;

int main() {
    cin >> n;

    ll _maxX = INT_MIN, _maxY = INT_MIN;
    ll _ans = INT_MIN;
    for(ll i = 0 ; i < n ; i++){
        cin >> x >> y;
        _ans = max(_ans, x + y);
    }
    cout << _ans;

    return 0;
}
