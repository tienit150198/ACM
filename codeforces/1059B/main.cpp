#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Max 1007
using namespace std;

ll n,m;
ll a[Max][Max], b[Max][Max];

int main() {
    fast
    cin >> n >> m;

    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            char t;
            cin >> t;

            if(t == '#')
                a[i][j] = 1;
        }
    }

    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ;j++){
            if(i >= 0 && j >= 0 && j + 2 < m && i + 2 < n && a[i][j]){
                b[i][j] = 1;
                b[i+1][j] = 1;
                b[i+2][j] = 1;
                b[i][j+1] = 1;
                b[i][j+2] = 1;
                b[i+1][j+2] = 1;
                b[i+2][j+2] = 1;
                b[i+2][j+1] = 1;
                i++;
            }
        }
    }

    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            if(a[i][j] != b[i][j]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";


    return 0;
}
