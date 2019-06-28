#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, m;
ll ans = 0;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    ll i = 0, j = 0;
    for( ; i <= n ; i++){
        for(j = 0 ; j <= m ; j++){
            if(i*i + j == n && j*j + i == m)
                ans++;
        }
    }
    cout << ans;

    return 0;
}
