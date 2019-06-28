#include <bits/stdc++.h>
#define ll long long int
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define is insert
#define _auto int main()
#define Acepted return 0;
#define ipair pair<ll,ll>
#define spair pair<string,string>
#define debug(a,st,en) {for(ll i = st; i <= en ; i++) {cout << a[i] << " ";} << cout << endl;}
#define debuga(a) cout << (#a) << " = " << a << endl;
#define FOR(i,a,b) for(ll i = a; i <= b ; i++)
#define FORD(i,a,b) for(ll i = a; i >= b; i--)
#define EACH(it,a) for(_typeof(a.begin()) it = a.begin() ; it != a.end() ; ++it)
#define EPS 0.0000000001
#define SQ(a) a*a
#define SUM(a) (a*(a+1))/2
#define Max 200007
#define limit 1000007
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll n, k;
priority_queue<ll> pq;

vector< ipair > a;
vector<ll> b;

_auto {
    fast
    cin >> n >> k;

    FOR(i,0,n-1) {
        ll x;
        cin >> x;
        a.pb(mp(x,-1));
        //    a[i].se = i;
        b.pb(x);
        pq.push(x);
    }

    bool f = false;
    while(!pq.empty()) {
        ll x = pq.top();
        pq.pop();
        vector<ll>::iterator it = std::find(b.begin(), b.end(), x);

        ll index = distance(b.begin(), it);
        priority_queue<ll> pqTmp = pq;
//        cout << index << " " << a[index].fi << " -> " << f+1 << endl;

        ll i = 0, j = 0, tmp = index;
        if(a[index].se == -1)
            a[index].se = f;
        while(i < k && tmp >= 0) {
            if(a[tmp].se == -1) {
                a[tmp].se = f;
                tmp--;
                i++;
            }else
                tmp--;
        }

        tmp = index;
        while(j < k && tmp < n){
            if(a[tmp].se == -1){
                a[tmp].se = f;
                j++;
                tmp++;
            }else
                tmp++;
        }
/*
        for(ll i = max(index - k, 0LL) ; i < min(index + k+1, n) ; i++) {
            if(a[i].se == -1)
                a[i].se = f;
        }
*/
        f = !f;

        ll _size = pqTmp.size();
        i = 0;
        while(i < _size) {
            ll xx = pqTmp.top();
            pqTmp.pop();
            vector<ll>::iterator it1 = std::find(b.begin(), b.end(), xx);

            ll index1 = distance(b.begin(), it1);

            if(a[index1].se == -1)
                pqTmp.push(xx);
            i++;
        }
        pq = pqTmp;

    }


    FOR(i,0,n-1)
    cout << a[i].se + 1;

    Acepted
}
