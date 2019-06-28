#include <bits/stdc++.h>
#define ll long long int
#define Max 2000007

using namespace std;

string str;

int main() {
//    freopen("01.in", "r", stdin);
    ios::sync_with_stdio(false);
   /* cin >> str;

    for(ll i = 0 ; i < str.size() ; i++){

    }*/

    return 0;
}
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    // freopen("COMPRESS.INP", "r", stdin);
    // freopen("COMPRESS.OUT", "w", stdout);

    string s;
    cin >> s;

    int n = s.length();
    string ans;

    for(int len = 1; len <= n; ++len) {
        if (n % len != 0) continue;

        bool ok = true;
        for(int i = 0; i < n; ++i) {
            if (s[i] != s[i%len]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            ans = to_string(n/len) + s.substr(0, len);
            break;
        }
    }

    cout << ans;

    return 0;
}

*/
