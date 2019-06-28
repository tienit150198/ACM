#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;
ll a[Max];

void gen(ll a[], ll n){

}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;

    ll c = 0, c1 = -5;
    for(ll i = 1; i <= n ; i++) {
        cin >> a[i];
        a[i] %= k;
    }


    return 0;
}



