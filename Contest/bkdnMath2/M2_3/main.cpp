#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll t, n;
vector<ll> a;

bool isPrime(ll a) {
    if(a < 2)
        return false;

    ll tmp = sqrt(a);

    for(ll i = 2 ; i <= tmp ; i++) {
        if(!(a%i))
            return false;
    }
    return true;
}

ll isSearch(ll l , ll r, ll key){
    ll mid = (l + r) / 2;
    ll ans = INT_MAX;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] >= key){
            ans = min(ans,a[mid]);
            r = mid - 1;
        }else
            l = mid + 1;
    }

    return ans;
}

ll isSearch1(ll l, ll r, ll key){
    ll mid = (l + r) / 2;
    ll ans = INT_MIN;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] <= key){
            ans = max(ans,a[mid]);
            l = mid + 1;
        }else
            r = mid - 1;
    }

    return ans;
}

int main(){
    fast
    for(ll i = 2 ; i <= Max ; i++) {
        if(isPrime(i)) {
            a.push_back(i);
        }
    }

    scanf("%lld", &t);
    ll _size = a.size();
    while(t--){
        scanf("%lld", &n);
        ll tmp = isSearch(0,_size,n);
        ll tmp1 = isSearch1(0,_size,n);

        ll ans = tmp;
        if(abs(ans-n) > abs(tmp1-n)){
            ans = tmp1;
        }
        else if(abs(ans-n) == abs(tmp1-n))
            ans = min(tmp,tmp1);
        printf("%lld\n", ans);
    }

    return 0;
}
