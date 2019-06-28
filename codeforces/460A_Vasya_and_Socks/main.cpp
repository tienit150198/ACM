#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;

    cout << n + (n - 1) / ( m -1);

    return 0;
}
