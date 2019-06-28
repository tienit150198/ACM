#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define Max 100011

using namespace std;
ll n, m;

class G {
    ll v;
    list<ll> *a;
public:
    G(ll v = 0) {
        this->v = v;
        this->a = new list<ll>[v];
    }
    void addEdge(ll u, ll v) {
        this->a[u].pb(v);
        this->a[v].pb(u);
    }
    ll dfs(ll s, bool visited[]);
};


ll G::dfs(ll s, bool visited[]) {
    stack<ll> st;
    vector<ll> res;
    st.push(s);
//   res.push_back(s);
    visited[s] = true;

    while(!st.empty()) {
        ll u = st.top();
        //      cout << u << " ";
        st.pop();
        res.push_back(s);

        list<ll>::iterator it;

        for(it = a[u].begin(); it != a[u].end() ; it++) {
            if(!visited[*it]) {
                visited[*it] = true;
                st.push(*it);
            }
        }
    }
//   cout << endl << endl;
    return res.size();

}

bool visited[Max];
int main() {
    ios::sync_with_stdio(false);

    cin >> n >> m;
    G a(n);
    for(ll i = 0 ; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        a.addEdge(u,v);
    }

    ll max1 = 0, max2 = 0;
    for(ll i = 0 ; i < n; i++) {
        if(!visited[i]) {
            ll tmp = a.dfs(i,visited);

            if(max1 < tmp) {
                max2 = max1;
                max1 = tmp;
            } else if(max2 < tmp) {
                max2 = tmp;
            }
        }
    }

    cout << max1 + max2;
    return 0;
}
