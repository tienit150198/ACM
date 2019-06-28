#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> a;

void convert(ll x[], ll n) {
    ll res = 0;
    for(int i = 0 ; i < n ; i++) {
        res = res * 10 + x[i];
    }
    //  cout << res << endl;
    a.push_back(res);
}

void gen(ll x[], ll n) {
    for(int i = 0 ; i < n ; i++) {
        x[i] = 4;
    }

    ll i = n - 1;
    while(true) {
        convert(x,n);
        i = n - 1;

        while(i >= 0 && x[i] == 7)
            i--;
        if(i < 0)
            break;
        x[i] = 7;

        for(ll j = i + 1 ; j < n ; j++)
            x[j] = 4;
    }

}

ll n;
int main() {
    ll x[20];
    // sinh mang
    for(int i = 1 ; i <= 9 ; i++)
        gen(x,i);


    cin >> n;

    for(int i = 0 ; i < a.size() ; i++) {
        if(n == a[i]) {
            cout << i+1;
            break;
        }
    }

    return 0;
}
