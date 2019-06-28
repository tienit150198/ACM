#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
#define Max 1000
using namespace std;
ll n, m;
bool matrix[Max][Max];
ll l[Max][Max];

ipair s,e;

ll dx[] = {0,1,0,-1};
ll dy[] = {1,0,-1,0};

void init(){
    for(int i = 0 ;i < Max; i++){
        for(int j = 0 ; j  < Max; j++){
            l[i][j] = 0;
            matrix[i][j] = false;
        }
    }
}

void input(){
    char tmp;
    for(int  i = 0 ; i <m; i++){
        for(int j = 0 ; j < n; j++){
            cin >> tmp;
            if(tmp ==  '#'){
                matrix[i][j] = true;
            }
            else if(tmp == 'F'){
                e = ipair(i,j);
            }
            else if(tmp == 'S'){
                s = ipair(i,j);
            }
        }
    }
}

bool isCheck(ll xx, ll yy){
    if(xx >= 0 && xx <m && yy >= 0 && yy < n)
        return true;

    return false;
}

ll bfs(){
    queue<ipair> st;
    st.push(s);

    matrix[s.first][s.second] = true;
    ipair tmp;
    while(!st.empty()){
        tmp = st.front();
        st.pop();

        ll x = tmp.first;
        ll y = tmp.second;

        if(tmp == e){
            return l[x][y] -1;
        }

        for(ll i = 0; i < 4; i++){
            ll xx = x + dx[i];
            ll yy = y + dy[i];

            if(isCheck(xx,yy) && !matrix[xx][yy]){
                matrix[xx][yy] = true;
                l[xx][yy] = l[x][y]+1;

                st.push(ipair(xx,yy));
            }

        }
    }
    return -1;
}

int main()
{
    freopen("input.in","r", stdin);
    freopen("output.out","w", stdout);
    cin >> m >> n;

    init();
    input();
    input();

    cout << bfs();

    return 0;
}
