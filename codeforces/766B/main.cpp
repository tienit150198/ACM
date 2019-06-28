#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);

    bool f = false;
    for(ll i = 0 ; i < n-2 ; i++) {
        if(a[i] + a[i +1 ] > a[i + 2] && a[i + 1] + a[i + 2] > a[i] && a[i + 2] + a[i] > a[i + 1]) {
            f = true;
            break;
        }
    }
    if(f) {
        cout << "YES";
    } else
        cout << "NO";


    return 0;
}
