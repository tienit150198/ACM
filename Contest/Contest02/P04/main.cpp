#include <bits/stdc++.h>
#define ll long long int
#define Max 10000011
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s, res = "";
    ll n;
    cin >> n;
    cin >> s;

    ll _size = s.size();
    ll i = _size - 1;
    while(i >= 0 && s[i] <= s[i - 1]) {
        i--;
    }
    i--;
    for(ll j = i-1 ; j >= 0 ; j--) {
        res += s[j];

    }
//   cout << s[i+1] << endl;
//   cout << res << endl;
    if(i < 0) {
        cout << -1 << endl;
        return 0;
    }
    reverse(res.begin(), res.end());
    string a = "";
    for(ll id = i ; id < _size ; id++) {
        a += s[id];
    }
//    cout << a << endl;
    sort(a.begin(),a.end());
//    cout << a << endl;

    ll sizeA = a.size();

    for(ll id = 0 ; id < sizeA ; id++) {
        if(a[id] == s[i] && a[id] != a[id+1]) {
            if(id != sizeA - 1) {
                res += a[id+1];
                a[id+1] = 32;
                break;
            }
            res += a[id];
            sizeA--;
        }
    }

    for(ll id = 0; id < sizeA ; id++) {
        if(a[id] != 32)
            res += a[id];
    }
    cout << res;

    return 0;
}
