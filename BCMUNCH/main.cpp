#include <bits/stdc++.h>
#define ll long long int
#define ipair pair <ll,ll>
using namespace std;

ll r,c;
ll l[100][100];
bool b[100][100];
ipair s,e;

ll dx[] = {0,1,0,-1};
ll dy[] = {1,0,-1,0};

bool isCheck(ll x, ll y){
    if(x >= 0 && x < r && y >=0 && y < c)
        return true;

    return false;
}

ll bfs(){
    queue<ipair> q;
    ipair tmp = s;
    q.push(s);

    b[tmp.first][tmp.second] = true;

    while(!q.empty()){
        tmp = q.front();
        q.pop();

        ll x = tmp.first;
        ll y = tmp.second;

        if(tmp == e){
            return l[x][y];
        }

        for(int i = 0 ; i < 4; i++){
            ll xx = x + dx[i];
            ll yy = y + dy[i];
            if(isCheck(xx,yy) && !b[xx][yy]){
                b[xx][yy] = true;
                l[xx][yy] += l[x][y] + 1;
                q.push(ipair(xx,yy));
            }
        }
    }
}

int main()
{
    cin >> r >> c;
    char tmp;
    for(int i = 0 ; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> tmp;
            l[i][j] = 0;
            b[i][j] = false;
            if(tmp == '*')
                b[i][j] = true;
            if(tmp == 'C'){
                s = ipair(i,j);
            }
            if(tmp == 'B'){
                e = ipair(i,j);
            }
        }
    }

    cout << bfs();
   // system("PAUSE");
    return 0;
}
