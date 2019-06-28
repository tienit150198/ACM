#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;

bool slove(string str) {
    stack<char> s;
    for(ll i = 0 ; i < str.size() ; i++) {
        if(str[i] == '{' || str[i] == '[' || str[i] == '(')
            s.push(str[i]);
        else {
            if(!s.empty()) {
                char t = s.top();
                if(str[i] == ')' && t == '(' || str[i] == ']' && t == '[' || str[i] == '}' && t == '{') {
                    s.pop();
                } else {
                    return false;
                }
            }else
                return false;

        }
    }
    if(s.empty()) {
        return true;
    }
    return false;
}
int main() {
    fast
   // freopen("input.in", "r", stdin);
    cin >> n;

    while(n--) {
        string str;
        cin >> str;

        bool f = slove(str);
        if(f) {
            cout << "YES"<< endl;
        } else
            cout << "NO" << endl;
    }

    return 0;
}
