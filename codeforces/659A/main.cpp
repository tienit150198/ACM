#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, a, b;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> a >> b;

    if(b < 0)
        b = n + b;

    if((a + b%n) %n == 0) {
        cout << n;
        return 0;
    }

    ll temp = (a + b%n)%n;
    if(temp < 0) {
        cout << n + temp;
        return 0;
    }
    cout << temp;

    return 0;
}
