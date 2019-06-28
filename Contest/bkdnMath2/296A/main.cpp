#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define limit 10007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n;
ll a[limit];

int main() {
    fast
    cin >> n;

    for(ll i = 0 ; i < n ; i++){
        ll tmp;
        cin >> tmp;
        a[tmp]++;
    }
    bool f =false;
    for(ll i = 1 ; i <= 1000 ; i++){
        if(a[i] > (n+1)/2){
            f = true;
            break;
        }
    }

    if(f){
        cout << "NO";
    }else
        cout << "YES";

    return 0;
}
