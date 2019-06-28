#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, x, y;
string str;

int main()
{
    cin >> n >> x >> y;
    cin >> str;

    ll del = 0;
    ll ans = 0;
    if(x <= y){
        for(int i = 0 ; i < n ; i++)
            if(str[i] == '1')
                ans++;
        cout << ans;
        return 0;
    }
    if(x > y)
        del = y;
    reverse(str.begin(),str.end());
    for(ll i = 0; i < del ; i++){
        if(str[i] == '1')
            ans++;
    }

    if(str[del+1] =='1')
        ans++;
    if(str[del] == '0')
        ans++;
    cout << ans;


    return 0;
}
