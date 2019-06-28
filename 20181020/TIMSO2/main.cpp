#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
using namespace std;

ll m;
string res = "";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> m;
    // test biên
    if(m == 0){
        cout << 10;
        return 0;
    }
    if(m == 1){
        cout << 1;
        return 0;
    }
    ll j = 0;
    ll ans = 0;
    ll tmp = m;
    for(ll i = 9 ; i >= 2; i--){
        while( m % i == 0){
            res += i + '0';
            ans += i;
            m /= i;
        }
    }
    if(m > 1){
        cout << -1;
        return 0;
    }
    reverse(res.begin(),res.end()); // hoán đổi xâu
    cout << res;
    return 0;
}
