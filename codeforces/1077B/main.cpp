#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
bool a[200];

bool isCheck(){
    for(ll i = 1 ; i <= n - 2 ; i++)
        if(a[i] == 1 && a[i + 2] == 1 && a[i + 1] == 0)
            return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 1 ; i <= n ; i++)
        cin >> a[i];

    ll ans = 0;
    for(ll i = 1 ; i <= n - 2 ; i++){
        if(a[i] == 1 && a[i + 2] == 1 && a[i + 1] == 0){
            ll j = i + 2;
            ll c = 1;
            while(a[j] == 1 && a[j + 2] == 1 && a[j + 1] == 0){
                j+= 2;
                c++;
            }
            c++;
            ans += c / 2;
            i = j;
        }
    }
    cout << ans;


    return 0;
}
