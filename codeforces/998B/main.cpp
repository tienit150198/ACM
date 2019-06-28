#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

ll n, b;
ll a[Max], f[Max];
vector<ll> r;
int main(){
    fast
    cin >> n >> b;

    for(ll i = 1 ; i <= n ; i++){
        cin >> a[i];
        f[i] = f[i - 1];
        if(a[i] & 1)
            f[i]++;
    }
    ll i = 0;
    for(i = 2 ; i < n ; i += 2){
        if(f[i] == i - f[i]){
            r.push_back(abs(a[i] - a[i + 1]));
        }
    }
    sort(r.begin(), r.end());
    ll ans = 0;
    for(ll i = 0 ; i < r.size() && b ; i++){
        if(b >= r[i]){
            ans++;
            b -= r[i];
//            cout << r[i] << " ";
        }
    }
//    cout << endl;
    cout << ans;

    return 0;
}
