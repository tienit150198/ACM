#include <bits/stdc++.h>
#define ll long long int
#define Max 1011
using namespace std;

bool vst[Max];

class G{
    ll n;
    list<ll> *a;
public:
    G(ll n = 0){
        this->n = n;
        this->a = new list<ll>[n];
    }

    void addEdge(ll u, ll v){
        this->a[u].push_back(v);
        this->a[v].push_back(u);
    }

    void dfs(ll s){
        stack<ll> st;
        st.push(s);
        vst[s] = true;

        while(!st.empty()){
            ll u = st.top();
   //         cout << u << " ";
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
   //     cout << endl;
    }
};


int main()
{
  //  srand(time(NULL));
    ios::sync_with_stdio(false);
    ll n, m;
//    n = rand()%20;
//    m = rand()%20;
//    cout << n << " " << m << endl;
    cin >> n >> m;

    G a(n);

    for(ll i = 0 ; i < m; i++){
        ll u, v;
//        u = rand()%n;
//        v = rand()%n;
//        cout << u << " " << v << endl;
        cin >> u >> v;
        a.addEdge(u,v);
    }

    ll res = 0;
    for(ll i = 0 ; i < n; i++){
        if(!vst[i]){
            a.dfs(i);
            res++;
        }
    }

    cout << res;

    return 0;
}
