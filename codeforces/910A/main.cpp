#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;


ll n, d;
bool a[300];
int main() {
    cin >> n >> d;
    for(ll i = 1 ; i <= n ; i++){
        char t;
        cin >> t;
        a[i] = 0;
        if(t == '1')
            a[i] = 1;
    }

    ll ans = 0;
    ll j = 0;

    for(ll i = 1 ; i <= n ; i++){
        j = i + d;
        if(j > n)
            j = n;

        while(j-1 > i && j <= n && !a[j])
            j--;
        if(a[j])
            ans++;
        else if(a[j] == false || j < i){
            ans = -1;
            break;
        }
        if(j == n)
            break;
        i = j - 1;
    }
    cout << ans;

    return 0;
}
