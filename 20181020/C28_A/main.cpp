#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dx[] = {-1,-1,-1,0,1,1,1,0};
ll dy[] = {-1,0,1,1,1,0,-1,-1};

ll x, y, X, Y;

void change(char s) {
    if(s == 'D') {
        y--;
    } else if(s == 'U') {
        y++;
    } else if(s == 'L') {
        x--;
    } else if(s == 'R')
        x++;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> X >> Y;
    string s;
    cin >> s;
    x = 0;
    y = 0;

    ll a = abs(X - 0);
    ll b = abs(Y - 0);
    bool flag = false;
    if(a <= 1 && b <= 1) {
        flag = true;
        cout << 0 << endl;
    }

    for(ll i = 0 ; i < s.size(); i++) {
        change(s[i]);
        a = abs(X - x);
        b = abs(Y - y);

        if(a <= 1 && b <= 1) {
            flag = true;
            cout << i+1 << endl;;
        }
    }

    if(!flag)
        cout << -1;


    return 0;
}
