#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007

using namespace std;

ll n;
ll a[Max];
bool v[Max];
int main() {

    ios::sync_with_stdio(false);
    cin >> n;
    ll _max = INT_MIN, ans = 0;
    ll trung = 0;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
        if(v[a[i]]){
            trung++;
            continue;
        }
        v[a[i]] = true;
        if(a[i] > _max){
            _max = a[i];
            ll tmp = i - trung + 1 - ans;
            if(tmp == ans + 1)
                ans++;
        }
    }
    cout << ans;

    return 0;
}

