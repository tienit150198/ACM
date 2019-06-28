#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, a , b;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> a >> b;

    ll tmp = b - a;
    if(tmp == 0){
        cout << 1;
        return 0;
    }

    ll num = n - 2;
    if(n <= 2){
        cout << tmp + 1;
        return 0;
    }

    cout << tmp * num + 1;

    return 0;
}
