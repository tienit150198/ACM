#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, m;
//ll edge[Max];
list<ll> *a;

struct t{
    ll parent1, parent2;
};

t edge[Max];

bool dfs(ll s){
    stack<ll> st;
    st.push(s);
    set<ll> vt;

    map<ll,bool> vst;
    vst[s] = true;

    while(!st.empty()){
        ll u = st.top();
        vt.insert(u);
        st.pop();

        list<ll>::iterator it = a[u].begin();

        while(it != a[u].end()){
            if(!vst[*it]){
                st.push(*it);
                vst[*it] = true;
            }
            it++;
        }
    }

    return vt.size() == n;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;

    a = new list<ll>[n+1];

    for(ll i = 0 ; i < n + m - 1 ; i++){
        ll u, v;
        cin >> u >> v;
        if(edge[v].parent1 == 0){
            edge[v].parent1 = u;
        }else{
            edge[v].parent2 = u;
        }
        a[u].push_back(v);
    }
  /* for(ll i = 1 ; i <= n ; i++)
        cout << i << " -> " << edge[i].parent1 << endl;
*/
    ll root;
    for(ll i = 1 ; i <= n ; i++){
        bool tmp = dfs(i);
        cout << i << " " << tmp << endl;
        if(tmp){
            edge[i].parent1 = 0;
            edge[i].parent2 = 0;
            root = i;
        }
    }
/*
    ll root;
    for(ll i = 1 ; i <= n; i++){
        if(edge[i].parent1 == 0 && edge[i].parent2 == 0){
            root = i;
            break;
        }
    }*/

    for(ll i = 1 ; i <= n; i++){
        if(edge[i].parent1 == 0 && edge[i].parent2 == 0){
            cout << 0 << endl;
            continue;
        }
        if(edge[i].parent2 == root){
                if(edge[i].parent1 != 0)
                    cout << edge[i].parent1 << endl;
                else
                    cout << edge[i].parent2 << endl;
            continue;
        }
        if(edge[i].parent2 != 0)
            cout << edge[i].parent2 << endl;
        else
            cout << edge[i].parent1 << endl;
    }

    return 0;
}
