#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll a, b, c;

int main() {
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;

    if(a == b) {
        cout << "YES";
        return 0;
    }
    if(c == 0) {
        cout << "NO";
        return 0;
    }
    ll t = (b - a) % c;
    if(!t){
        if(c > 0 && b > a || c < 0 && b < a){
            cout << "YES";
        }else
            cout << "NO";
        return 0;
    }
    cout << "NO";
    return 0;
}
