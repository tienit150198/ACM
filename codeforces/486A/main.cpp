#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    if(n%2) {
        cout << 0 - n/2-1;
    } else
        cout << n/2;

    return 0;
}
