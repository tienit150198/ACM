#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll t[3];

int main() {
    ios::sync_with_stdio(false);
    for(int i = 0 ; i < 3; i++)
        cin >> t[i];
    sort(t,t+3);
    ll a = t[0], b = t[1], c = t[2];

    string str;
    cin >> str;
    for(ll i = 0 ; i < 3 ; i++) {
        if(str[i] == 'C') {
            cout << c << " ";
        } else if(str[i] == 'B') {
            cout << b << " ";
        } else
            cout << a << " ";
    }

    return 0;
}
