#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str;
int a[26];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;

    if(n > 26){
        cout << -1;
        return 0;
    }

    ll ans = 0;
    for(ll i = 0 ; i < n; i++){
        a[str[i] - 97]++;
        if(a[str[i] - 97] > 1)
            ans++;
    }

    cout << ans;


    return 0;
}
