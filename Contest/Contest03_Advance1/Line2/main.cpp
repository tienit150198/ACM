#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
using namespace std;

ll n;
ipair s,e;

ll dx[] = {0,0,1,-1};
ll dy[] = {1,-1,0,0};
bool vst[20][20];

bool isCheck(ll i, ll j){
    if(i >= 0 && i < n && j >= 0 && j < n)
        return true;

    return false;
}

bool bfs(){
    queue <ipair> q;
    q.push(s);


    while(!q.empty()){
        ipair t = q.front();

        ll x = t.first;
        ll y = t.second;

        q.pop();

        if(t == e)
            return true;

        for(ll i = 0 ; i < 4 ; i++){
            ll xx = x + dx[i];
            ll yy = y + dy[i];
            if(isCheck(xx,yy) && !vst[xx][yy]){
                vst[xx][yy] = true;
                q.push(make_pair(xx,yy));
            }
        }
    }
    return false;
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
            ll x;
            cin >> x;
            if(x == 1)
                vst[i][j] = true;
        }
    }

    vst[s.first][s.second] = true;
    bool tmp = bfs();
    if(tmp){
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}
