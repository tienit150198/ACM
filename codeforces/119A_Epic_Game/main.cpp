#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll a, b, n;

ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> a >> b >> n;
    ll c = 0;
    do
    {
        ll temp = gcd(a, n);
        if(min(a, n) < temp)
        {
            break;
        }
        c++;
        n -= temp;
        ll temp2 = gcd(b, n);
        if(min(b, n) < temp2)
        {
            break;
        }
        c++;
        n -= temp2;
    }
    while(true);
    if(c % 2)
        cout << 0;
    else
        cout << 1;
    return 0;
}
