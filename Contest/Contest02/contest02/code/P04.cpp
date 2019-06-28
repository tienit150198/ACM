#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<string> vs;
#define REP(i,a,b) for (int i=a; i<=b; i++)
#define REPR(i,a,b) for (int i=a; i>=b; i--)
#define fa(i,v) for (auto i: v)
#define all(c) c.begin(), c.end()
#define sz(x) ((int)((x).size()))
#define what_is(x) cerr << #x << " is " << x << " ";
#define F first
#define S second
#define pb push_back
#define eb emplace_back


int main() {
    std::ios::sync_with_stdio(false);
    int n; string s,t; cin >> n;
    while (sz(s)!=n) {
        cin >> t;
        s += t;
    }
    map<int, int> m; m[s[n-1]-48]++;
    REPR(i, n-2, 0)
    if (s[i]<s[i+1]) {
        REP(j, s[i]-47, 9)
            if (m[j]) {
                m[j]--, m[s[i]-48]++;
                cout << s.substr(0,i); cout << j; REP(k, 0, 9) REP(l, 1, m[k]) cout << k;
                return 0;
            }
    } else m[s[i]-48]++;
    cout << -1;
    return 0;
}
