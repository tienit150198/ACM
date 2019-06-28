#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n;
ll a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    ll i = 0 , j = n - 1;
    bool f =false;
    while(i <= j){
        if(!f)
            swap(a[i], a[j]);

        i++, j--;
        f = !f;
    }

    for(ll i = 0 ; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
