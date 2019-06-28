#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    ll a[n+1];

    string res = "Impossible";
    bool flag = false;
    ll _maxAm = INT_MIN;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];

        if(a[i] < 0){
            _maxAm = max(a[i],_maxAm);
        }
    }

    if(_maxAm == INT_MIN){
        cout << res;
    }
    else{
        cout << _maxAm;
    }

    return 0;
}
