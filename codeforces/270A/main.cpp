#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll t, n;

bool isCheck(ll x) {
    if(360%tt == 0)
    ll tt = 180 - x;
        return true;
    return false;
}

int main() {
    cin >> t;
    while(t--) {
        cin >> n;

        if(isCheck(n))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;

    }

    return 0;
}
