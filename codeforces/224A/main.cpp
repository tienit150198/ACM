#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    ll ab, bc, ca;
    cin >> ab >> bc >> ca;
    ll a = sqrt(ab * ca / bc + 0.5);
    ll b = sqrt(bc * ab / ca + 0.5);
    ll c = sqrt(ca * bc / ab + 0.5);
    cout << (a + b + c) * 4 << endl;

    return 0;
}
