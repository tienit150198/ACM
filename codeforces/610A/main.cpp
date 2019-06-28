#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    if(n % 2) {
        cout << 0;
        return 0;
    }

    ll t = n / 4;
    ll t1 = n % 4;

    if(!t1)
        t--;
    cout << t;


    return 0;
}
