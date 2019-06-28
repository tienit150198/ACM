#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define Max_Number 1000000007
using namespace std;

ll n;
ll a[Max];
map<ll,ll> t;

ll getBIT(ll m){
    ll res = 0;
    while(m >= 1){
        res += t[m];
        m -= m & (-m);
    }
    return res;
}

void updateBIT(ll index){
    while(index <= Max_Number){
        t[index]++;
        index += index & (-index);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // lỗi tại hàm init... ngu
    cin >> n;

    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }

    ll res = 0;
    for(ll i = n ; i >= 1; i--){
        res += getBIT(a[i]-1);
        updateBIT(a[i]);
    }
    cout << res;
    return 0;
}
