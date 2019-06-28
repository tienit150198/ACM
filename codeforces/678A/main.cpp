#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> k;

    cout << n - n%k + k;

    return 0;
}
