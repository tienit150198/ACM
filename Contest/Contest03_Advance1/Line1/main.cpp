#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
using namespace std;

ll n;
ipair s,e;

ll dx[] = {0,0,1,-1};
ll dy[] = {1,-1,0,0};
bool vst[20][20];

struct m{
    ll x, y, c;
    m(){
        c = 0;
    }
    m(ll X, ll Y, ll C){
        x = X;
        y = Y;
        c = C;
    }
};

bool isCheck(ll i, ll j){
    if(i >= 0 && i < n && j >= 0 && j < n)
        return true;

    return false;
}

ll bfs(){
    queue <m> q;
    q.push(m(s.first, s.second, 1));


    while(!q.empty()){
        m t = q.front();

        ll x = t.x;
        ll y = t.y;

        q.pop();

        if(x == e.first && y == e.second)
            return t.c;

        for(ll i = 0 ; i < 4 ; i++){
            ll xx = x + dx[i];
            ll yy = y + dy[i];
            if(xx == e.first && yy == e.second)
                return t.c + 1;
            if(isCheck(xx,yy) && !vst[xx][yy]){
                vst[xx][yy] = true;
                q.push(m(xx,yy,t.c+1));
            }
        }
    }
    return -1;

}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> s.first >> s.second >> e.first >> e.second;
    s.first--;
    s.second--;
    e.first--;
    e.second--;
    for(ll i = 0 ; i < n; i++){
        for(ll j = 0 ; j < n; j++){
            ll x, y;
            cin >> x;
            if(x == 1)
                vst[i][j] = true;
        }
    }

    vst[s.first][s.second] = true;
    ll tmp = bfs();
    if(tmp != -1){
        cout << tmp;
    }
    else
        cout << 0;
    return 0;
}
