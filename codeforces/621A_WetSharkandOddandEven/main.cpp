#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;
ll n;
ll a[Max];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    ll sum = 0;
    for(ll i = 0 ; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a,a+n);
    if(sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        for(ll i = 0 ; i < n ; i++)
            if(a[i]%2)
            {
                sum -= a[i];
                break;
            }
        cout << sum;
    }
    return 0;
}
