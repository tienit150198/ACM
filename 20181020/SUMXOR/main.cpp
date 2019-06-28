#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    bitset<32> res;
    res[0] = 1;
    for(ll i = 2; i <= n; i++)
        res ^=i;

    cout << res;
    return 0;
}
