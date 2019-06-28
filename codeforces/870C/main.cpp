#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll q, n;

ll a[20];
ll b[4] = {4,6,9};
int main() {
    fast

    for(ll i = 0 ; i <= 16 ; i++)
        a[i] = -1;

    a[0] = 0;
    for(ll i = 1 ; i < 16 ; i++){
        for(ll j = 0 ; j < 3 ; j++){
            if(i >= b[j] && a[i - b[j]] != -1){
                a[i] = max(a[i], a[i - b[j]] + 1);
            }
        }
    }
/*
    for(ll i = 1 ; i <= 16 ; i++)
        cout << i << " " << a[i] << endl;

*/

    cin >> q;

    while(q--){
        cin >> n;

        if(n <= 16){
            cout << a[n] << endl;
            continue;
        }

        ll t = (n - 16) / 4 + 1;
        cout << t + a[n - 4*t] << endl;


    }

    return 0;
}
