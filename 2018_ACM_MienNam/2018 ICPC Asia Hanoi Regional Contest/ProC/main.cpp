#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
#define mp make_pair
#define Max 107
using namespace std;

ll dx[] = {0,-1,0,1};
ll dy[] = {-1,0,1,0};

ll a[Max][Max];
ll r, c, n;

struct m{
    ipair x;
    ll xx;
    m(ipair X, ll XX){
        x = X;
        xx = XX;
    }
};

queue<m> q;

bool isCheck(ll x, ll y){
    if(x > 0 && x <= r && y > 0 && y <= c)
        return true;
    return false;
}

void bfs(){
    ll c = 1;
    ll res = 0;
    while(!q.empty()){
        ipair t = q.front().x;
        ll u = q.front().xx;
    //    cout << t.first << " " << t.second << " " << u << endl;
        c = max(c,u);
        q.pop();

        for(ll i = 0 ; i < 4 ; i++){
            ll xx = t.first + dx[i];
            ll yy = t.second + dy[i];
            if(isCheck(xx,yy) && !a[xx][yy]){
                a[xx][yy] = 1;
                q.push(m(mp(xx,yy),u+1));
            }
        }

    }
    cout << c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> r >> c >> n;
    ll x, y;
    for(ll i = 1 ; i <= n; i++){
        cin >> x >> y;
        a[x][y] = 1;
        q.push(m(mp(x,y),1));
    }
    bfs();

    return 0;
}
