#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n,m;

int main()
{
    ios::sync_with_stdio(false);

    cin >> n >> m;
    if(n >= 27)
        cout << m;
    else{
        n = 2 << (n - 1);
        cout << m%n;
    }

    return 0;
}
