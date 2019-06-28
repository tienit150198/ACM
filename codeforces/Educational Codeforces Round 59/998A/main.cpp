#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n;
ll a[20];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll _sum = 0;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
        _sum += a[i];
    }

    if(n == 1){
        cout << -1;
        return 0;
    }
    if(n == 2){
        if(a[0] == a[1])
            cout << -1;
        else{
            cout << 1 << endl;
            cout << ( a[0] < a[1] ? 1 : 2);
        }

        return 0;
    }
    if(_sum%2)
        cout << 1 << endl << 1;
    else{
        for(ll i = 0 ; i < n ; i++){
            if(a[i] != _sum/2){
                cout << 1 << endl << i+1;
                break;
            }
        }
    }

    return 0;
}
