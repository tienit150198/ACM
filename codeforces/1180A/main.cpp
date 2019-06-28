#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n;
ll a[200];
int main()
{
    a[1] = 1;
    for(ll i = 2 ; i <= 100 ; i++)
        a[i] = a[i-1] + (i-1)*4;
    cin >> n;

    cout << a[n];
    return 0;
}
