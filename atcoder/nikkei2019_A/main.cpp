#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, a, b;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> a >> b;

    ll _min = min(a,b);
    ll _max = max(a + b - n, 0*1LL);

    cout << _min << " " << _max;


    return 0;
}
