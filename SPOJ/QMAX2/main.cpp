#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 50007
using namespace std;

struct Node{
    ll lazy;
    ll val;
};

Node t[Max*4+3];
ll a[Max];

ll getMid(ll st, ll en) {
    return ((st + en) / 2);
}

void down(ll id){
    ll tt = t[id].lazy;
    t[id*2].lazy += tt;
    t[id*2].val += tt;

    t[id*2+1].lazy += tt;
    t[id*2+1].val += tt;

    t[id].lazy = 0;

}

void build(ll node, ll st, ll en){
    if(st == en){
        t[node].val = a[st];
        return;
    }

    ll mid = getMid(st,en);
    build(node*2, st, mid);
    build(node*2+1, mid + 1, en);

    t[node].val = max(t[node*2].val , t[node * 2 + 1].val);
}

void update(ll id, ll st, ll en, ll l, ll r, ll val){
    if(l > en || r < st)
        return;
    if(st >= l && en <= r){
        t[id].val += val;
        t[id].lazy += val;
        return;
    }

    down(id);   // đẩy lazy propagation xuống các con

    ll mid = getMid(st,en);

    update(id*2, st, mid, l, r, val);
    update(id*2+1, mid + 1, en, l, r, val);

    t[id].val = max(t[id*2].val, t[id*2+1].val);
}

ll query(ll id, ll st, ll en, ll l, ll r){
    if(l > en || r < st)
        return INT_MIN;
    if(st >= l && en <= r){
        return t[id].val;
    }

    ll mid = getMid(st,en);
    down(id);

    ll p1 = query(id*2, st, mid, l, r);
    ll p2 = query(id*2 + 1, mid + 1, en, l, r);

    return max(p1,p2);
}
ll n, m, q;

void out(ll n){
    for(ll i = 1 ; i <= 4 * n ; i++)
        cout << i << " -> " << t[i].val << " " << t[i].lazy << endl;
    cout << endl;

}

int main()
{
    fast;
    cin >> n >> m;

    while(m--){
        ll x, i, j, val;
        cin >> x >> i >> j;

        if(x == 0){
            cin >> val;
            update(1,1,n,i,j,val);
            continue;
        }

        cout << query(1,1,n,i,j) << endl;
    }

    return 0;
}
