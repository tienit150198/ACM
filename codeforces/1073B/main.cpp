#include <bits/stdc++.h>
#define ll long long int
#define Max 200007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n;
ll a[Max];

int main() {
    fast
    cin >> n;

    for(ll i = 1 ; i <= n ; i++){
        ll tmp;
        cin >> tmp;
        a[tmp] = i;
    }
    ll t = 0;
    for(ll i = 1 ; i <= n ; i++){
        ll tmp;
        cin >> tmp;
        if(a[tmp] > t){
            cout << a[tmp] - t << " ";
            t = a[tmp];
        }else
            cout << 0 << " ";
    }

    return 0;
}
