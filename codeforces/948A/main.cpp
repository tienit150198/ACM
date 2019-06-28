#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll r, c;
ll a[600][600];

int main() {
    ios::sync_with_stdio(false);
    cin >> r >> c;

    for(ll i = 0 ; i <= r+1 ; i++){
        for(ll j = 0 ; j <= c+1 ; j++)
            a[i][j] = 1;
    }

    for(ll i = 1 ; i <= r ; i++){
        for(ll j = 1 ; j <= c ; j++){
            char tmp;
            cin >> tmp;

            if(tmp == 'S')
                a[i][j] = 0;
            else if(tmp =='W')
                a[i][j] = 2;
        }
    }

    bool f = false;
    for(ll i = 1 ; i <= r ; i++){
        for(ll j = 1 ; j <= c ; j++){
            if(a[i][j] == 2){
                if(!a[i - 1][j] || !a[i][j-1] || !a[i+1][j] || !a[i][j+1]){
                    f = true;
                    break;
                }
            }
        }
    }
    if(f){
        cout << "No";
        return 0;
    }
    cout << "Yes" << endl;
    for(ll i = 1 ; i <= r ; i++){
        for(ll j = 1 ; j <= c ; j++){
            if(a[i][j] == 0)
                cout << 'S';
            else if(a[i][j] == 1)
                cout << 'D';
            else if(a[i][j] == 2)
                cout << 'W';
        }
        cout << endl;
    }

    return 0;
}
