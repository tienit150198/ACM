#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, m;
ll ans = 0;
ll _gcd(ll a, ll b){
    if(b == 0)
        return a;
    return _gcd(b,a%b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    ans = 6 - max(n,m) + 1;
    if(ans == 0){
        cout << 0 <<"/" << 1;
        return 0;
    }
    ll tmp = _gcd(ans,6);
    ans /= tmp;
    cout << ans << "/" << 6/tmp;

    return 0;
}
