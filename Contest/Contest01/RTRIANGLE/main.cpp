#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll temp = sqrt(n);
    ll tong = 0;
    while(true) {
        tong = temp * (temp + 1) / 2;

        if(tong == n) {
            cout << "YES";
            return 0;
        }
        if(tong > n)
            break;

        temp++;
    }
    cout <<"NO";

    return 0;
}
