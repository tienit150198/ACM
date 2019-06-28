#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll res = 1;
    for(ll i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n%i == 0)
        {
            res++;
            if(i != n / i)
            {
                res++;
            }
        }

    }
    cout << res;

    return 0;
}
