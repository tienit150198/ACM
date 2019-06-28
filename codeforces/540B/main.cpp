#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n;
ll a[Max];
ll even[Max], odd[Max];
ll nOdd = 1, nEven = 1;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    ll sum = 0;
    for(ll i = 1 ; i <= n ; i++){
        cin >> a[i];
        sum += a[i];
        if(i%2)
            odd[nOdd++] = a[i];
        else
            even[nEven++] = a[i];
    }

    for(ll i = 1 ; i <= nOdd ; i++){
        odd[i] += odd[i - 1];
    }

    for(ll i = 1 ; i <= nEven ; i++){
        even[i] += even[i - 1];
    }

    bool f = true;
    ll ans = 0;
    if(odd[nOdd-1] - a[1] == even[nEven-1])
        ans++;

    for(ll i = 2 ; i <= n ; i++){
        ll t = i/2 + i%2;
        if(f){
            ll tmp = even[nEven-1] - even[t] + odd[t];
            if(sum - a[i] - tmp == tmp){
                ans++;
            }
            f = !f;
        }else{
            ll tmp = odd[nOdd-1] - odd[t] + even[t-1];
            if(sum - a[i] - tmp == tmp){
                ans++;
            }
            f = !f;
        }
    }
    cout << ans;

    /*for(ll i = 1 ; i < nOdd ; i++)
        cout << odd[i] << " ";
    cout << endl;

    for(ll i = 1 ; i < nEven ; i++)
        cout << even[i] << " ";*/


    return 0;
}
