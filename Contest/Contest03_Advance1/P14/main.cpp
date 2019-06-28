#include <bits/stdc++.h>
#define ll long long int
#define Max 10011
using namespace std;

ll n, k;
double a[Max];
double res = 0;

bool isCheck(double mid){
    ll t = 0;
    for(ll i = 0 ; i < n; i++){
        t += a[i]/ mid;
    }

    if(t >= k){
        res = mid;
        return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> k;

    double _min = INT_MAX, _max = INT_MIN;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
        _min = min(a[i], _min);
        _max = max(a[i],_max);
    }

    double l = 0, r = _max;
    double mid = (l + r) / 2;
    // cach 1
    for(int i = 0;  i< 100 ; i++){
        if(isCheck(mid)){
            l = mid;
        }
        else
            r = mid;
        mid = (l + r) / 2;
    }

    /*
    // cach 2
    while(l != mid && r != mid){
        if(isCheck(mid)){
            l = mid;
        }
        else
            r = mid;
        mid = (l + r) / 2;
    }

    */

    printf("%.2f",floor(res * 100) / 100);


    return 0;
}
