#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<ll> a,b;
ll f[Max];
ll slove(string str) {
    ll n = str.size();
    ll isFind = 1;

    for(ll i = 0 ; i < n ; i++) {
        if(str[i] == 'Q') {
            b.push_back(isFind);
            isFind++;
        } else if(str[i] == 'A') {
            a.push_back(isFind);
            isFind++;
        }
    }

    ll ans = 0;
    for(ll i = 0 ; i < a.size() ; i++) {
        ll t = a[i];

        ll x = lower_bound(b.begin(), b.end(), t) - b.begin();
        ll y = upper_bound(b.begin(), b.end(), t) - b.end();
        ans += abs(x) * abs(y);
    }
    return ans;
}

ll slove1(string str) {
    ll n = str.size();
    for(ll i = 0 ; i < n ; i++){
        if(i != 0)
            f[i] = f[i - 1];
        if(str[i] == 'Q')
            f[i]++;
    }
 /*   for(ll i = 0 ; i < n ; i++)
        cout << i << " " << f[i] << endl;
*/
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++){
        if(str[i] == 'A'){
            ll x = f[n-1] - f[i];
            ans += x*f[i];
        }
    }
    return ans;
}
int main() {
    fast
    string str;
    cin >> str;

    cout << slove1(str);

    return 0;
}
