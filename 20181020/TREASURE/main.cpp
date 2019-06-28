#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
#define Max 1005
using namespace std;

ll dx[] = {0,0,-1,1};
ll dy[] = {-1,1,0,0};

ll n,m;
ll a[Max][Max];
queue<ipair > q, save;
ipair s, e;
ll res  =0;

void output() {
    for(ll i = 0; i < n; i++) {
        for(ll j = 0 ; j < m; j++)
            cout << setw(2) << a[i][j] << " ";

        cout << endl;
    }
    cout << endl;
}

bool isCheck(ll i, ll j) {
    if(i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}

void next() {
    ll _size = q.size();
    if(q.size() == 0)
        return;

    for(ll i = 0 ; i < _size ; i++) {
        //   output();
        ipair t = q.front();
        ll x = t.first;
        ll y = t.second;
        q.pop();

        for(ll i = 0 ; i < 4; i++) {
            ll xx = x + dx[i];
            ll yy = y + dy[i];
            if(isCheck(xx,yy) && a[xx][yy] == 1) {

                a[xx][yy] = 0;
                q.push(make_pair(xx,yy));
            }
        }
    }
}

void bfs() {
    save.push(s);
    a[s.first][s.second] = -1;
    queue<ipair> q1;

    while(true) {

        while(!save.empty()) {
            //       cout << "s: " << save.front().first << " " << save.front().second<< endl;
            q1.push(save.front());
            save.pop();
        }
        //     cout << endl << endl;

        while(!q1.empty()) {
            ipair t = q1.front();
            ll x = t.first;
            ll y = t.second;
            q1.pop();
            if(t == e) {
                return;
            }
            bool flag = false;
            for(ll i = 0 ; i < 4; i++) {
                ll xx = x + dx[i];
                ll yy = y + dy[i];
                if(isCheck(xx,yy) && a[xx][yy] == 0) {
                    //              cout << xx << " " << yy << endl;
                    flag = true;
                    q1.push(make_pair(xx,yy));
                    a[xx][yy] = -1;
                    if(xx == e.first && yy == e.second)
                        return;
                }
            }
            if(!flag) {
                save.push(make_pair(x,y));
            }
        }
        //    cout << endl << endl;

        res++;
        next();
    }
}

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for(ll i = 0 ; i < n; i++) {
        for(ll j = 0 ; j < m; j++) {
            cin >> a[i][j];

            if(a[i][j] == 0) {
                q.push(ipair(i,j));
            }
        }
    }

    cin >> s.first >> s.second >> e.first >> e.second;
    if(s == e) {
        cout << 0 << endl;
        return 0;
    }

    s.first--;
    s.second--;
    e.first--;
    e.second--;

    bfs();
    cout << res;

    return 0;
}
