#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;

int main() {
    fast
    cin >> n;

    ll t = n * (n + 1) / 2;
    if(t%2 == 0)
        cout << 0;
    else
        cout << 1;


    return 0;
}
