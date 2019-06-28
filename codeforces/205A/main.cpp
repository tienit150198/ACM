#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll _min = INT_MAX, pos = 0;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
        if(a[i] < _min){
            _min = a[i];
            pos = i+1;
        }
    }

    sort(a,a+n);
    if(n == 1){
        cout << 1;
        return 0;
    }

    if(a[1] == _min)
        cout << "Still Rozdil";
    else
        cout << pos;

    return 0;
}
