#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[Max];

struct m
{
    ll _min, _max;
};

m ans[Max];

ll isMax(ll a, ll b)
{
    if(a > b)
        return a;
    return b;
}

ll isMin(ll a, ll b)
{
    if(a > b)
        return b;
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n; i++)
    {
        cin >> a[i];
        ans[i]._min = INT_MAX;
        ans[i]._max = INT_MIN;
    }

    ans[0]._max = a[n-1] - a[0];
    ans[0]._min = a[1] - a[0];

    ans[n-1]._max = ans[0]._max;
    ans[n-1]._min = a[n-1] - a[n-2];

    for(ll i = 1 ; i < n - 1; i++)
    {
        ans[i]._max = max(a[n-1]-a[i], a[i] - a[0]);
        ans[i]._min = min(a[i]-a[i-1], a[i+1] - a[i]);
    }

    for(ll i = 0 ; i < n; i++)
    {
        cout << ans[i]._min << " " << ans[i]._max << endl;
    }

    return 0;
}

