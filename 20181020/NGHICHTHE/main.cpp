#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define Map map<ll,ll>
using namespace std;

ll n,q, L, R;
ll a[Max], l[Max];
Map t;
void init(){
    for(ll i = 0 ; i <= Max ;i++){
        t[i] = 0;
    }
}

ll get(ll i){
    ll res = 0;
    while(i > 0){
        res += t[i];
        i -= i & -i;
    }
    return res;
}

void update(ll i, ll value){
    while(i <= Max){
        t[i] += value;
        i += i & -i;
    }
}

ll isSum(ll L, ll R){
    ll ans = 0;

    for(ll i = R ; i >= L ; i--){
        ans += get(a[i] - 1);
        update(a[i], 1);
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

  //  freopen("input.in","r", stdin);
    cin >> n >> q;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    Map t1 = t;

    while(q--){
        cin >> L >> R;
        cout << isSum(L,R) << endl;
        t.clear();
    }

    return 0;
}
