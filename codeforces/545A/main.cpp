#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

ll a[200][200];
bool res[400];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll num = 0;

    for(ll i = 1 ; i <= n; i++){
        for(ll j = 1; j <= n ; j++){
            cin >> a[i][j];

            if(a[i][j] == 1)
                res[i] = true;
            else if(a[i][j] == 2)
                res[j] = true;
            else if(a[i][j] == 3)
                res[i] = res[j] = true;
        }
    }

    for(ll i = 1 ; i <= n; i++){
        if(!res[i])
            num++;
    }

    cout << num << endl;
    for(ll i = 1 ; i <= n; i++)
        if(!res[i])
            cout << i << " ";

    return 0;
}
