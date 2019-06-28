#include <bits/stdc++.h>
#define ll long long int
#define Max 10007
using namespace std;
ll a[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    for(ll i = 0 ; i < 14; i++)
        if(n%a[i] == 0)
        {
            cout << "YES";
            return 0;
        }

    cout << "NO";

    return 0;
}
