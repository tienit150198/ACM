#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
bool a[Max];
ll f[Max];

ll slove(bool a[], ll n) {
    ll c = 0;
    f[0] = 1;
    for(ll i = 1 ; i < n ; i++) {
        f[i] = f[i - 1];
        if(a[i] != a[i - 1] && !c) {
            f[i]++;
        } else {
            if(c == 0) {
                if(a[i] == a[i - 1]) {
                    c++;
                    f[i]++;
                    a[i] = !a[i];
                }
            } else if(c == 1) {
                if(a[i] == a[i - 1]) {
                    f[i]++;
                    a[i] = !a[i];
                } else {
                    f[i]++;
                    c++;
                    continue;
                }
            } else if(c == 2) {
                if(a[i] != a[i - 1]) {
                    f[i]++;
                }
            }
        }
    }

    ll ans = 0;
    for(ll i = 0 ; i < n ; i++) {
//        cout << f[i] << " ";
        ans = max(ans,f[i]);
    }
    return ans;
}

ll slove2(bool a[], ll n) {
    ll res = 1;
    for(int i = 1; i < n; i++) {
        res += (a[i] != a[i - 1]);
    }
    return min(res+2,n);
}

int main() {
    cin >> n;

    for(ll i = 0 ; i < n ; i++) {
        char t;
        cin >> t;
        a[i] = 0;
        if(t == '1')
            a[i] = 1;
    }

   // cout << slove(a,n) << endl;
    cout << slove2(a,n);    // vcl



    return 0;
}
