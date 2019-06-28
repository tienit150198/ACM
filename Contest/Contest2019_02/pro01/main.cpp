#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
struct m{
    ll t, d;
    ll indx;
    m(){
        indx = -1;
    }
};
bool cmp(m a, m b){
    if(a.t < b.t)
        return true;
    if(a.t == b.t){
        if(a.d < b.d)
            return true;
    }
    return false;
}

m a[Max];
ll res = 0;

ll isSearch(ll l, ll r, ll key){
    ll mid = (l + r) / 2;
    ll ans = -1;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid].t >= key){
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}

int main()
{
    srand(time(NULL));
    ios::sync_with_stdio(false);
    cin >> n;
//    n = rand()%10;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i].t;
//       a[i].t = rand()%1000;
    }
    for(ll i = 0 ; i < n; i++){
        cin >> a[i].d;
//     a[i].d = rand()%1000;
    }
    sort(a,a+n,cmp);

    res = 1;
    a[0].indx = 1;
//    ll _max = 1;
    for(ll i = 0 ; i < n; i++){
        if(a[i].indx == -1){
            a[i].indx = res;
        }
        ll tmp = isSearch(i,n-1,a[i].t + a[i].d);
        if(tmp != -1 ){
            if(a[tmp].indx == -1){
                a[tmp].indx = a[i].indx;
            }
        }
        else
            res++;
    }
//    for(ll i = 0; i < n; i++){
//        cout << a[i].t << " " << a[i].d << " " << a[i].indx << endl;
//    }
    cout << res-1;

    return 0;
}
