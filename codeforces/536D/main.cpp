#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define ipair pair<ll,ll>
#define MOD 10000000007
#define Max 300007
using namespace std;

ll n, m;

set<ll> a[Max];

bool vst[Max];

int main() {
    fast
    cin >> n >> m;

    for(ll i = 0; i < m ; i++) {
        ll u, v;
        cin >> u >> v;

        a[u].insert(v);
        a[v].insert(u);
    }

    priority_queue<ll, vector<ll>, greater<ll> > q;
    q.push(1);

    vst[1] = true;

    while(!q.empty()) {
        ll u = q.top();

        cout << u << " ";
        q.pop();

        set<ll>::iterator it = a[u].begin();
        while(it != a[u].end()) {
            if(!vst[*it]) {
                q.push(*it);
                vst[*it] = true;
            }
            it++;
        }
    }

    return 0;
}
