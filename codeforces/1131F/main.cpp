#include <bits/stdc++.h>
#define ll long long int
#define Max 150007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
list<ll>a[Max];

bool slove(ll st){
    stack<ll> s;
    set<ll> ss;
    vector<bool> v(Max,false);
    s.push(st);
    v[st] = true;

    bool f = false;
    while(!f){
        ll u = s.top();
        list<ll>::iterator it = a[u].begin();
        while(it != a[u].end()){
            ss.insert(*it);
            if(!v[*it]){
                v[*it] = true;
                s.push(*it);
                f = true;
                break;
            }
            it++;
        }
        if(f == false)
            break;
        f = false;
    }

    if(!f && s.size() == n){
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
        return true;
    }
    return false;

}

int main() {
    fast
    cin >> n;

    for(ll i = 0 ; i < n-1 ; i++){
        ll x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for(ll i = 1 ; i <= n ; i++){
        bool t = slove(i);

        if(t)
            break;
    }


    return 0;
}
