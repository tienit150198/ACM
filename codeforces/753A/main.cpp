#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<ll> a;
ll k;

int main() {
    fast
    cin >> k;

    ll sum = 0;
    ll i = 1;
    while(k > i + sum) {
        a.push_back(i);
        sum += i;
        i++;
    }

    k -= sum;

    if((a.size() && k > a[a.size() - 1]) || !a.size() )
        a.push_back(k);
    else
        a[a.size() - 1] += k;

    cout << a.size() << endl;
    for(ll i = 0 ; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}
