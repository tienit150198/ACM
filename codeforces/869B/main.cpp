#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll a, b;

int main() {
    cin >> a >> b;
    if(a == b) {
        cout << 1;
        return 0;
    }
    if(b - a == 1) {
        cout << b%10;
        return 0;
    }
    if(b - a == 2) {
        cout << ((b%10) * ((b-1)%10))%10;
        return 0;
    }
    if(b - a == 3) {
        cout << ((b%10) * ((b-1)%10) * ((b-2)%10))%10;
        return 0;
    }
    if(b - a == 4) {
        cout << ((b%10) * ((b-1)%10) * ((b-2)%10) * ((b-3)%10))%10;
        return 0;
    }
    cout << 0;
    return 0;
}
