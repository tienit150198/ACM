#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll q;

int main()
{
    ios::sync_with_stdio(false);
    cin >> q;

    while(q--){
        ll l,r,d;
        cin >> l >> r >> d;
        ll ans = d;
        if(d <l || d > r){
            cout << d << endl;
            continue;
        }
        ans = r + d - r%d;
        cout << ans << endl;
    }

    return 0;
}
