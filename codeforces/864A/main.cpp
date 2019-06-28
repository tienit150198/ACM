#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
map<ll,ll> t;

int main() {

    cin >> n;

    for(ll i = 0 ; i < n; i++) {
        ll tmp;
        cin >> tmp;
        t[tmp]++;
    }

    if(t.size() == 2) {
        map<ll,ll>::iterator it = t.begin();

        ll val1 = it->first, num1 = it->second;
        it++;
        ll val2 = it->first, num2 = it->second;
        if(num1 == num2) {
            cout << "YES" << endl << val1 << " " << val2;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
