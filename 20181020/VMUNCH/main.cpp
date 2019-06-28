#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
using namespace std;
ll l[100][100];
bool b[100][100];

ll r, c;
ipair s,e;
ll dx[] = {0,1,0,-1};
ll dy[] = {1,0,-1,0};

void init(){
    for(ll i = 0 ; i < 100 ; i++){
        for(ll j = 0 ; j <  100; j++){
            l[i][j] = 0;
            b[i][j] = false;
        }
    }
}

bool isCheck(ll u, ll v){
    if(u >= 0 && u < r && v >= 0 && v < c)
        return true;
    return false;
}

void BFS(){
    queue<ipair> q;

    b[s.first][s.second] = true;
    ipair tmp;

    q.push(s);
    while(!q.empty()){
        tmp = q.front();
    //    cout << tmp.first << " " << tmp.second << endl;
        ll x = tmp.first;
        ll y = tmp.second;
        q.pop();

        if(tmp == e){
            cout << l[x][y];
            return;
        }

        for(ll i = 0 ; i < 4; i++){
            ll u = x + dx[i];
            ll v = y + dy[i];
            if(!b[u][v] && isCheck(u,v)){
                b[u][v] = 1;
                l[u][v] = l[x][y] + 1;
                q.push(ipair(u,v));
            }
        }
    }
}

int main()
{
    init();
    cin >> r >> c;
    char tmp;
    for(ll i = 0 ; i < r ;i++){
        for(ll j = 0 ; j < c ; j++){
            cin >> tmp;
            if(tmp == '*'){
                b[i][j] = 1;
            }
            else if(tmp == 'B'){
                e = ipair(i,j);
            }
            else if(tmp == 'C'){
                s = ipair(i,j);
            }
        }
    }

    BFS();
    return 0;
}
