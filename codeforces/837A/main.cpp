#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll ans = 0;
    while(cin >> str){
        ll tmp = 0;
        for(ll i = 0 ; i < str.size() ; i++){
            if(str[i] >= 'A' && str[i] <= 'Z')
                tmp++;
        }
        ans = max(ans,tmp);
    }
    cout << ans;

    return 0;
}
