#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str;

string abc = "GRB";

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;

    ll ans = 0;
    for(ll i = 0 ; i < n-1 ; i++) {
        if(str[i] == str[i + 1]) {
            ll j = i+1;
            while(str[j] == str[j + 1] && j < n - 1) {
                j++;
            }
            ll k = i+1;
            while(k <= j) {
                int t = 0;
                while(str[k] == str[k + 1] || str[k] == str[k - 1]) {
                    str[k] = abc[t];
                    t++;
                }
                ans++;
                k += 2;
            }
            i = j;

        }
    }
    cout << ans << endl << str;

    return 0;
}
