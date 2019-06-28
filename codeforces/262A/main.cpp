#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll isCheck(ll i) {
    ll c = 0;
    while(i > 0) {
        if(i%10 == 7 || i%10 == 4)
            c++;
        i /= 10;
    }
    return c;
}
ll n, k;
ll a[300];
int main() {
    fast
    cin >> n >> k;

    ll c = 0;
    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i];
        if(isCheck(a[i]) <= k)
            c++;
    }
    cout << c;



    return 0;
}
