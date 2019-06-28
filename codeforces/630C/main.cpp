#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;

int main() {
    cin >> n;

    ll r = 0;
    for(ll i = 1 ; i <= n ;i++){
        r += (pow(2, i));
    }
    cout << r << endl;

    return 0;
}
