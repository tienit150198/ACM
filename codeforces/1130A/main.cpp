#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll a[Max];

int main() {
    fast
    cin >> n;

    ll c = 0, c1 = 0;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
        if(a[i] > 0)
            c++;
        if(a[i] < 0)
            c1++;
    }

    if(c >= (n+1)/2)
        cout << 2;
    else if(c1 >= (n+1)/2)
        cout << -2;
    else
        cout << 0;



    return 0;
}
