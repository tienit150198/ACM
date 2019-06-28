#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define ipair pair<ll,ll>
#define fi first
#define se second

using namespace std;

ipair s,e,tmp;
ll n;
string str;

int main() {
    ios::sync_with_stdio(false);
    cin >> s.fi >> s.se;
    cin >> e.fi >> e.se;

    cin >> n >> str;

    tmp.fi = s.fi;
    tmp.se = s.se;
    bool f = false;
    ll d = 0, i = 0;
    ll x = 0, y = 0;
    for(i = 0 ; i < n; i++){
        if(str[i] == 'U')   y++;
        if(str[i] == 'D')   y--;
        if(str[i] == 'L')   x--;
        if(str[i] == 'R')   x++;

    if(s.fi < e.fi && s.se < e.se){
        if(s.fi + x < s.fi && s.se + y < e.se){
            cout << -1;
            return 0;
        }
    }else if(s.fi > e.fi && s.se > e.se){
        if(s.fi - x < s.fi && s.se + y > e.se){
            cout << -1;
            return 0;
        }
    }else if(s.fi > e.fi && s.se < e.se){
        if(s.fi - x < s.fi && s.se + y < e.se){
            cout << -1;
            return 0;
        }
    }else if(s.fi < e.fi && s.se > e.se){
        if(s.fi - x < s.fi && s.se + y > e.se){
            cout << -1;
            return 0;
        }
    }

    i = 0;
    d = 0;
    f = false;
    while(true) {
        if(i >= n)
            i = 0;
        if(s.fi == e.fi && s.se == e.se)
            break;
        if(d >= n && tmp.fi == s.fi && tmp.se == s.se) {
            f = true;
            break;
        }

        if(str[i] == 'U') {
            if(s.se < e.se) {
                if(s.fi < e.fi)
                    s.fi++,s.se++;
                else if(s.fi > e.fi) {
                    s.fi--,s.se++;
                } else {
                    if(s.se + 1 < e.se)
                        s.se += 2;
                    else
                        s.se++;
                }
            } else {
                i++,d++;
                continue;
            }
        }
        else if(str[i] == 'D') {
            if(s.se > e.se) {
                if(s.fi < e.fi)
                    s.fi++,s.se--;
                else if(s.fi > e.fi)
                    s.fi--, s.se--;
                else {
                    if(s.se > e.se + 1)
                        s.se -= 2;
                    else
                        s.se--;
                }
            } else {
                i++,d++;
                continue;
            }
        }
        else if(str[i] == 'R') {
            if(s.fi < e.fi) {
                if(s.se < e.se)
                    s.fi++,s.se++;
                else if(s.se > e.se) {
                    s.fi++,s.se--;
                } else {
                    if(s.fi + 1 < e.fi)
                        s.fi += 2;
                    else
                        s.fi++;
                }
            } else {
                i++,d++;
                continue;
            }
        }
        else{
            if(s.fi > e.fi) {
                if(s.se < e.se)
                    s.fi--,s.se++;
                else if(s.se > e.se) {
                    s.fi--,s.se--;
                } else {
                    if(s.fi > e.fi + 1)
                        s.fi -= 2;
                    else
                        s.fi--;
                }
            } else {
                i++,d++;
                continue;
            }
        }


        d++;
        i++;
    }

    if(f) {
        cout << -1;
    } else
        cout << d;

    return 0;
}
