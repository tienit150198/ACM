#include <bits/stdc++.h>
#define ll long long int
#define Max 1007

using namespace std;

ll a[3][3] =    {1,1,1,
                 1,1,1,
                 1,1,1
                };
ll b[3][3];

ll dy[] = {-1,0,+1,0};
ll dx[] = {0,-1,0,+1};
bool isCheck(ll i, ll j) {
    if(i >= 0 && i < 3 && j >= 0 && j < 3)
        return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);

    for(ll i = 0 ; i < 3 ; i++) {
        for(ll j = 0 ; j < 3 ; j++) {
            cin >> b[i][j];
        }
    }

    for(ll i = 0 ; i < 3; i++) {
        for(ll j = 0 ; j < 3 ; j++) {
            bool flag = false;
            if(b[i][j]%2) {
                flag = true;
                a[i][j] = !a[i][j];
            }
            for(ll k = 0 ; k < 4 && flag; k++) {
                ll xx = i + dx[k];
                ll yy = j + dy[k];

                if(isCheck(xx,yy)) {
                    a[xx][yy] = !a[xx][yy];
                }
            }
        }
    }

    for(ll i = 0 ; i < 3 ; i++) {
        for(ll j = 0 ; j < 3 ; j++)
            cout << a[i][j];
        cout << endl;
    }


    return 0;
}
