/*#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define ipair pair<ll,ll>
#define MOD 10000000007
#define Max 100007
using namespace std;

ll n, m;
ll a[Max];

struct xx{
    ll val, indx;
};

xx c[Max];

bool cmp(xx a, xx b){
    if(a.val < b.val)
        return true;
    if(a.val == b.val && a.indx < b.indx)
        return true;
    return false;
}

map<ll,ipair> t;

int main() {
    fast
    cin >> n >> m;

    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];
    for(ll i = 0 ; i < n ; i++) {
        cin >> c[i].val;
        c[i].indx = i;
        t[i] = mk(c[i].val,a[i]);
    }

    map<ll,ipair>::iterator it = t.begin();
    cout << t[3].second ;
    sort(c,c+n, cmp);
    while(it != t.end()) {
        cout << it->fi << " -> " << it->se.fi << " - " << it->se.se << endl;
        it++;
    }
    cout << endl;

    ll ans = 0;
    ll i = 0;
    while(m--) {
        ans = 0;
        ll a, b;
        cin >> a >> b;
        a--;

        ll tmp = min(t[a].se,b);
        ans = ans + tmp * t[a].fi;
        b -= tmp;
        t[a].se -= tmp;

        if(b > 0) {

            map<ll,ipair>::iterator it = t.begin();
            while(it != t.end()) {
                if(it->se.se && it->se.fi == c[i].val) {
                    tmp = min(it->se.se,b);
                    b -= tmp;
                    it->se.se -= tmp;
                    ans = ans + it->se.fi * tmp;
                    while(t[c[i].indx].se == 0){
                        i++;
                    }
                }

                if(!b) {
                    break;
                }
                it++;
            }

            it = t.begin();
            while(it != t.end()) {
                if(it->se.se && it->se.fi == c[i].val) {
                    tmp = min(it->se.se,b);
                    b -= tmp;
                    it->se.se -= tmp;
                    ans = ans + it->se.fi * tmp;
                    while(t[c[i].indx].se == 0){
                        i++;
                    }
                }

                if(!b) {
                    break;
                }
                it++;
            }
        }
        if(b)
            cout << 0 << endl;
        else
            cout << ans << endl;
        map<ll,ipair>::iterator it1 = t.begin();
        while(it1 != t.end()) {
            cout << it1->se.se << " ";
            it1++;
        }
        cout << endl << endl;
    }


    return 0;
}
*/

#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define ipair pair<ll,ll>
#define MOD 10000000007
#define Max 100007
using namespace std;

ll n, m;
ll a[Max];

struct xx{
    ll sl,mn,indx;
};

bool cmp(xx a, xx b){
    if(a.mn < b.mn)
        return true;
    if(a.mn == b.mn && a.indx < b.indx)
        return true;
    return false;
}

xx c[Max];

int main() {
    fast
    cin >> n >> m;

    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
        c[i].sl = a[i];
    }
    for(ll i = 0 ; i < n ; i++) {
        cin >> c[i].mn;
        a[i] = c[i].mn;
        c[i].indx = i;
    }

    sort(a,a+n);

    while(m--){
        ll ans = 0;
        ll a, b;
        cin >> a >> b;
        a--;

        ll tmp = min(c[a].sl,b);
        c[a].sl -= tmp;
        b -= tmp;

        ans = ans + c[a].mn * tmp;

        if(b > 0){
            ll tmp = a, i = 0;;
            while(b && i < n/2){

            }
        }
        if(b)
            cout << 0 << endl;
        else
            cout << ans << endl;

        for(ll i = 0 ; i < n ;i++)
            cout << c[i].sl << " ";
        cout << endl << endl;
    }


    return 0;
}
