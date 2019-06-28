#include <bits/stdc++.h>
#include <string>
#define ll long long int
#define Max 1011
using namespace std;
string s, t, t1;

bool checkdx(string s) {
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return tmp == s;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> s;
    if(checkdx(s)) {
        cout << 0;
        return 0;
    }

    ll n = s.size();
    for(ll k = 1; k < n; k++){
        string tmp = s;
        t = s.substr(0,k);
        reverse(t.begin(), t.end());
        tmp += t;
        if(checkdx(tmp)){
            cout << k << endl;
            cout << tmp;
            break;
        }
    }

    return 0;
}
