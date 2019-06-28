#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll ans = 0;

    while(n > 0){
        ans += n%2;
        n/=2;

    }


    cout << ans;

    return 0;
}
