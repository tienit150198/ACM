#include <bits/stdc++.h>
#define ll long long int
#define Max 10007
using namespace std;

ll n, q;
ll t[4*Max+1], a[Max];
ll getMid(ll st, ll en){
    return ((st + en)/2);
}
void build(ll node, ll st, ll en){
    if(st == en){
        t[node] = a[st];
        return;
    }
    ll mid = getMid(st,en);
    build(node*2, st, mid);
    build(node*2 + 1, mid + 1, en);
    t[node] = t[node*2] + t[node * 2 + 1];
}

void update(ll node, ll st, ll en, ll idx, ll val){
    if(st == en){
        a[idx] = val;
        t[node] = val;
        return;
    }

    ll mid = getMid(st,en);
    if(st <= idx && idx <= mid)
        update(node*2, st, mid, idx, val);
    else
        update(node*2 + 1, mid + 1, en, idx, val);

    t[node] = t[node*2] + t[node * 2 + 1];
}

ll query(ll node, ll st, ll en, ll l, ll r){
    if(r < st || en < l){
        return 0;
    }
    if(l <= st && en <= r){
        return t[node];
    }

    ll mid = getMid(st,en);
    ll p1 = query(node*2,st,mid,l,r);
    ll p2 = query(node*2+1, mid + 1, en,l,r);

    return (p1 + p2);
}

void out(ll n){
    for(ll i =1 ; i <= n*4; i++){
            cout << t[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> q;
    for(ll i = 1 ; i <= n ; i++)
        cin >> a[i];

    build(1,1,n);
  //  out(n);

    while(q--){
        ll x, i, j;
        cin >> x >> i >> j;

        if(x == 1){
            update(1,1,n,i,j);
    //        out(n);
            continue;
        }

        cout << query(1,1,n,i,j) << endl;
    }


    return 0;
}
