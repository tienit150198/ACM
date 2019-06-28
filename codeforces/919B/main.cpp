#include <bits/stdc++.h>
#define ll long long int
#define Max 20000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

ll k;
ll a[Max+3];
int main() {
    fast
    for(ll i = 1 ; i <= Max ; i++) {
        a[i] = a[i/10] + i%10;
    }

    cin >> k;

    ll c = 1;
    for(ll i = 1 ; i <= Max ; i++) {
        if(a[i] ==10) {
            c++;
            if(c == k+1) {
                cout << i;
                break;
            }
        }
    }
    return 0;
}
