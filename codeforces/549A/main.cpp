#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, m;
ll a[100][100];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;

    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            char tmp;
            cin >> tmp;
            a[i][j] = 0;
            if(tmp == 'f')
                a[i][j] = 100;
            if(tmp == 'a')
                a[i][j] = 20;
            if(tmp == 'c')
                a[i][j] = 330;
            if(tmp == 'e')
                a[i][j] = 4000;
        }
    }

    ll r = 0;
    for(ll i = 0 ; i < n-1 ; i++){
        for(ll j = 0 ; j < m-1 ; j++){
            if(a[i][j]){
                ll tmp = 0;
                tmp += a[i][j];
                tmp += a[i+1][j];
                tmp += a[i][j+1];
                tmp += a[i+1][j+1];
                if(tmp == 4450)
                    r++;
            }
        }
    }
    cout << r;

    return 0;
}
