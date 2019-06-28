#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str[3];
ll ans = 0;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    string t;
    for(ll i = 0 ; i < 3 ; i++) {
        cin >> str[i];
    }
    for(ll i = 0 ; i < n ;i++){
        set<char>s;
        s.insert(str[0][i]);
        s.insert(str[1][i]);
        s.insert(str[2][i]);

        ans += s.size() - 1;
    }
    cout << ans;

    return 0;
}
