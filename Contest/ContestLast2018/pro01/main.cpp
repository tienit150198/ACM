#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
#define Max 1007
using namespace std;
ll n, m;
map<ll,ll> t;
list<ll> a[Max];
ll check;

bool bfs(ll s){
    stack<ll> st;
    st.push(s);
    bool v[Max];
    for(ll i = 0 ; i < n; i++)
        v[i] = false;
    v[s] = true;

    while(!st.empty()){
        ll u = st.top();
      //  cout << u << " ";
        st.pop();

        list<ll>::iterator it = a[u].begin();
        ll c = 0;
        while(it != a[u].end()){
            c++;
            ll tmp = *it;
            cout << tmp << " ";
            if(c >= check && *it == s){
       //         return true;
                return false;
            }
            if(!v[*it]){
                st.push(*it);
                v[*it] = true;
            }
            it++;
        }
    }
    cout << endl << endl;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    check = ( n == 3 ? 2 : n-1);
    ll u, v;
    bool vst[Max];
    for(ll i = 0 ; i < m ; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
        vst[u] = true;
        vst[v] = true;
    }
    for(ll i = 0 ; i < n; i++){
        if(vst[i]){
            if(bfs(i)){
                cout << "Graph is Cyclic";
                return 0;
            }
         //   check--;
        }
    }
    cout << "Graph is Not Cyclic";

    return 0;
}
/*
5 5
0 1
1 2
2 3
3 4
4 1

5 5
0 1
1 2
3 4
4 3
4 4
*/
