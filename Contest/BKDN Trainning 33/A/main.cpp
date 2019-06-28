#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
#define Max 1007
using namespace std;
ll n,m;
string a[Max];
ll dx[] = {0,-1,0,1};
ll dy[] = {-1,0,1,0};
ll _max = 0;
queue <ipair> sq;

bool isCheck(ll xx, ll yy) {
    if(xx > 0 && xx < n - 1 && yy > 0 && yy < m - 1)
        return true;
    return false;
}

void bfs(ll u, ll v) {
    bool flag = false;
    ll res = 0;
    queue<ipair> q, q1;
    q.push(make_pair(u,v));
    bool vst[Max][Max];
    vst[u][v] = true;

    while(!q.empty()) {
        ipair t = q.front();
        ll x = t.first;
        ll y = t.second;
        q1.push(make_pair(x,y));
        q.pop();
//        cout << a[x][y] << " : " << x << " " << y << endl;
        res++;
        for(ll i = 0 ; i < 4 ; i++) {
            ll xx = x + dx[i];
            ll yy = y + dy[i];

            if(isCheck(xx,yy)) {
                if(a[xx][yy] == '1' && !vst[xx][yy]) {
//                    cout <<"0 : " <<  xx << " " << yy << endl;
                    q.push(make_pair(xx,yy));

                    vst[xx][yy] = true;
                }
            }
        }
    }
    if(res > _max) {
        _max = res;
        sq = q1;
    }
//    return q1;
}
int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    bool vst[Max][Max];
    for(ll i = 0 ; i < n; i++) {
        for(ll j = 0 ; j < m; j++) {
            cin >> a[i][j];
            if(a[i][j] == '0') {
                a[i][j]++;
                vst[i][j] = false;
            } else {
                a[i][j]--;
                vst[i][j] = true;
            }
        }
    }
//    ll _max = 0, tmp = 0;
    queue<ipair> q;
    for(ll i = 0 ; i < n ; i++) {
        for(ll j = 0 ; j < m ; j++) {
            if(a[i][j] == '1') {
                bfs(i,j);
//                _max = max(_max, tmp);
            }
        }
    }
    for(ll i = 0 ; i < n; i++) {
        for(ll j = 0 ; j < m ; j++)
            vst[i][j] = false;
    }
//    cout << _max << endl;
    ll _max1 = 0;
    q = sq;
    while(!q.empty()) {
        ipair t = q.front();
        q.pop();
        vst[t.first][t.second] = true;
    }
//    set<ipair> st;
    q = sq;
    for(int i = 0 ; i < max(n*m); i++) {
        bool flag = false;
        ll tmp = 0;
        sq = q;
        while(!sq.empty()) {
            ipair t = sq.front();
            ll x = t.first;
            ll y = t.second;
            if(!vst[x][y]){
//                cout <<a[x][y] << " : "  << x << " " << y << endl;
                tmp++;
                vst[x][y] = true;
            }
//            st.insert(make_pair(x,y));
            sq.pop();
            for(int i = 0 ; i < 4; i++) {
                ll xx = x + dx[i];
                ll yy = y + dy[i];

                if(isCheck(xx,yy)) {
                    if(a[xx][yy] == '1' && !vst[xx][yy] && flag) {
//                        tmp++;
                        sq.push(make_pair(xx,yy));
//                        vst[xx][yy] = true;
                    } else if(a[xx][yy] == '0' && !flag) {
                        for(ll k = 0 ; k < 4; k++) {
                            ll xxx = xx + dx[k];
                            ll yyy = yy + dy[k];
                            if(isCheck(xxx,yyy) && a[xxx][yyy] == '1' && !flag && !vst[xxx][yyy]) {
                                flag = true;
                                sq.push(make_pair(xx,yy));
                                a[xx][yy] = '1';
                            }
                        }
                    }

                }
            }
        }
        _max1 = max(tmp,_max1);
    }

    cout << _max + _max1;
    return 0;
}
