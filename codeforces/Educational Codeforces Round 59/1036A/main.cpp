#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n,k;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;

    if(n > k)
        cout << 1;
    else
        cout << (k + n - 1) / n;

    return 0;
}
