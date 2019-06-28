#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n, k;
ll a[Max];
string str;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];

    cin >> str;

    ll ans = 0;
    for(ll i  = 0 ; i < n; i++){
        if(str[i] != str[i + 1]){
            ans += a[i];
        }else{
            ll j = i+1;
            ll t = 1;
            ll _sum = a[i];
            vector<ll> v;
            v.push_back(a[i]);
            while(str[j] == str[j + 1] && j < n - 1){
                v.push_back(a[j]);
                _sum += a[j];
                j++, t++;
            }
            if(str[j] == str[j - 1]){
                 v.push_back(a[j]);
                _sum += a[j];
                t++;
            }
            sort(v.begin(), v.end());
            if(t > k){
                t -= k;
                for(ll x = 0 ; x < t ; x++)
                    _sum -= v[x];
            }
            ans += _sum;
            i = j;
        }
    }

    cout << ans;

    return 0;
}
