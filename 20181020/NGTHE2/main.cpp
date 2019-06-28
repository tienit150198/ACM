#include <bits/stdc++.h>
#define ll long long int
#define Max 100100
#define Max_Number 1000000100
using namespace std;

ll n;
ll a[Max];
map<ll,ll> t;

ll getBIT(ll m){
    ll res = 0;
    for(; m >= 1; m -= m & - m){
        res += t[m];
    }
    return res;
}

void updateBIT(ll index){
    for(; index <= Max_Number; index += index & -index){
        t[index] += 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //lỗi ngu tại hàm init.
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
