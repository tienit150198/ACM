#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, t;

bool isCheck(ll a){
    return !(a & (a - 1));
}

int main() {
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n;
        ll _sum = n * (n + 1) / 2 - 1*2;
        ll tmp = 2;
        while(tmp <= n){
            _sum -= tmp*2;
            tmp *= 2;
        }
        cout << _sum << endl;
    }

    return 0;
}
