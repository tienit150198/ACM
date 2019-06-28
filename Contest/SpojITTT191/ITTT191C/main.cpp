#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll a, b, c, d;

int main() {
    fast
    ll t;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        ll n, m;

        n = a; m = c;

        if(n == m){
            if(m + 1 <= d)
                m++;
            else if(n + 1 <= b)
                n++;
        }
        cout << n << " " << m << endl;
    }


    return 0;
}
