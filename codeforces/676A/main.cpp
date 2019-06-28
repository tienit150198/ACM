#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
struct m{
    ll val, indx;
};

m _min, _max;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    _min.val = INT_MAX, _max.val = INT_MIN;
    for(ll i = 1 ; i <= n; i++){
        ll tmp;
        cin >> tmp;
        if(_min.val > tmp){
            _min.val = tmp;
            _min.indx = i;
        }
        if(_max.val < tmp){
            _max.val = tmp;
            _max.indx = i;
        }
    }

    ll ans = abs(_min.indx - _max.indx), ans1 = ans;

    ans = max(ans, max(abs(1 - _min.indx), abs(n - _min.indx)));
    ans1 = max(ans1, max(abs(1 - _max.indx), abs(n - _max.indx)));

    cout << max(ans,ans1);

    return 0;
}
