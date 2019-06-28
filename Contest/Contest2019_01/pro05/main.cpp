#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
ll _maxX, _maxY, _minX, _minY;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    _maxX = _maxY = INT_MIN;
    _minX = _minY = INT_MAX;
    ll x, y;
    for(ll i = 0 ; i < n; i++){
        cin >> x >> y;
        _maxX = max(x,_maxX);
        _maxY = max(y,_maxY);
        _minX = min(x,_minX);
        _minY = min(y,_minY);
    }
    printf("%.02f %.02f\n", (_maxX + _minX) / 2.0 , (_maxY + _minY) / 2.0);
    ll _max = max(_maxX, _maxY);
    ll _min = min(_minX, _minY);
    printf("%.02f", sqrt(_max + _min));

    return 0;
}
