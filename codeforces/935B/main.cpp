#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;

    ll ans = 0;
    ll x = 0, y = 0;
    for(ll i = 0 ; i < n-1 ; i++){
        if(str[i] == 'U')   y++;
        if(str[i] == 'R')   x++;

        if(x == y){
            if(str[i] == str[i + 1])
                ans++;
        }
    }

    cout << ans;


    return 0;
}
