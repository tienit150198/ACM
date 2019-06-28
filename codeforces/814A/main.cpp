#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;
ll a[200], b[200];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i];
    for(ll i = 0 ; i < k ; i++)
        cin >> b[i];
    sort(b,b+k, greater<ll>());

    bool flag = false;
    ll num = 0;
    for(ll i = 0 ; i < n; i++){
        if(a[i] == 0){
            a[i] = b[num++];
        }
    }

    for(ll i = 1 ; i < n; i++){
        if(a[i] < a[i - 1]){
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
