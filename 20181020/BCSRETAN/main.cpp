#include <bits/stdc++.h>
#define ll long long int
#define Max 10000111
using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    ll k;
    cin >> k;

    ll n = k;
    string tmp ="74";
    string res = "";
    while(k != 0){
        ll t = k%2;
        res += tmp[t];
        k /= 2;
    }
    string ans ="";
    if(n%2 == 0){
        k = res.size();
        for(ll i = k - 2 ; i >= 0 ; i--)
            ans += res[i];

        reverse(ans.begin(), ans.end());
        cout << ans;
        return 0;
    }
    cout << res;

    return 0;
}
