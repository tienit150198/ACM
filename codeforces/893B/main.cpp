#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[] = {1,6,28,120,496,2016,8128,32640};
ll _size = 8;
int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll ans = 1;
    vector<ll> v;
    v.push_back(1);
    v.push_back(n);

    for(ll i = 2 ; i * i <= n ; i++){
        if(n%i == 0){
            v.push_back(i);
            if(n / i != i)
                v.push_back(n/i);
        }
    }

    sort(v.begin(), v.end(), greater<ll>());

    for(ll i = 0 ; i < v.size() ; i++){
        ll j = 0;
        while(j < 8){
            if(a[j] == v[i]){
                cout << a[j];
                return 0;
            }
            j++;
        }
    }

    return 0;
}
