#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define pb push_back

using namespace std;

list<ll>* a;
ll n;

ll dfs(ll s){
    stack<ll> st;
    ll _count[n+1];
    for(ll i = 0 ; i <= n; i++)
        _count[i] = 0;

    st.push(s);

    while(!st.empty()){
        ll u = st.top();
        _count[u]++;
        if(_count[u] > 1)
            return u;
        st.pop();

        list<ll>::iterator it = a[u].begin();

        while(it != a[u].end()){
            st.push(*it);
            it++;
        }
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    a = new list<ll>[n+2];

    for(ll i = 1 ; i <= n; i++){
        ll tmp;
        cin >> tmp;
        a[i].pb(tmp);
    }

    for(ll i = 1 ; i <= n; i++){
        cout << dfs(i) << " ";
    }

    return 0;
}
