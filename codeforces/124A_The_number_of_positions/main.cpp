#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, a , b;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> a >> b;
    n -= a;
    cout << min(n,b+1);

    return 0;
}

