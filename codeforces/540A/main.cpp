#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll q, n;

int main() {
    ios::sync_with_stdio(false);
    cin >> q;

    while(q--){
        ll a, b;
        cin >> n >> a >> b;
        ll tmp = n * a;
        ll tmp1 = n/2 * b;
        if(n%2)
            tmp1 += a;

        cout << min(tmp,tmp1) << endl;
    }

    return 0;
}
