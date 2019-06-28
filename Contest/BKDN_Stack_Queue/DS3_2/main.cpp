#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll t;

struct m {
    ll val, valMax;
};
m f[Max];

int main() {
    fast
    // freopen("input.in", "r", stdin);
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        stack<ll> s, s1;

        for(ll i = 0 ; i < n ; i++) {
            ll tmp, ans = 1, _max = INT_MIN;
            cin >> tmp;
            if(i == 0) {
                s.push(tmp);
                _max = tmp;

            } else {
                _max = tmp;
                if(tmp >= s.top()) {
                    ans = f[i - 1].val + 1;
                    _max = max(f[i - 1].valMax, _max);
                    j = i - 2;
                    s1.push(s.top());
                    s.pop();
                    while(f[j].val != 1 &&  &&!s.empty() && tmp > s.top()) {
                        ans += f[j];
                        j--;
                        s1.push(s.top());
                        s.pop();
                    }



                }
            }
            f[i].val = ans;
            f[i].valMax = tmp;
            cout << ans << " ";
        }
    }

    return 0;
}
