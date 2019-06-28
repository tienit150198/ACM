#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
#define Max 100011
using namespace std;

ll n;
ll a[Max];
ipair p[Max];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i  <n; i++){
        cin >> a[i];
        p[i].first = a[i];
        p[i].second = i;
    }

    sort(p,p+n);

//    for(ll i = 0 ; i < n; i++)
//        cout << p[i].first << " " << p[i].second << endl;
//    cout << endl << endl;
    vector<bool> vst(n,false);
    map<ll,bool> t;
    ll ans = 0;
    for(ll i = 0 ; i < n; i++){
        if(vst[i] || p[i].second == i)
            continue;

        ll cycle_size = 0;
        ll j = i;
        while(!vst[j]){
            vst[j] = true;

//            if(!t[a[j]] && !t[a[p[j].second]]){
//                cout << a[j] << " " << a[p[j].second] << endl;
//                t[a[j]] = true;
//                t[a[p[j].second]] = true;
//            }

            cout << j << " " << p[j].second << " " << a[j] << " " << a[p[j].second] << endl;
            j = p[j].second;

            cycle_size++;
        }
        if(cycle_size > 0)
            ans += (cycle_size - 1);
    }

    cout << ans;

    return 0;
}
