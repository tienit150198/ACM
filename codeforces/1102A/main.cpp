#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);

    cin >> n;
    ll sum = n * (n + 1) / 2;
    if(sum%2)
        cout << 1;
    else
        cout << 0;

    return 0;
}
