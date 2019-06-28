#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[107];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    for(ll i = 0 ; i < n; i++)
        cout << a[i] << " ";


    return 0;
}
