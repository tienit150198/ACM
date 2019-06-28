#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n, r;
    cin >> n >> r;

    ll a[n];

    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a,a+n);

    ll res = 0;
    ll i = 0, j = 1;
    while(i < n ){
        j = i;
        res++;
        while(j < n - 1 && a[j + 1] <=a[i] + r){
            j++;
        }
        while(i < n && a[i] <= a[j] + r){
            i++;
        }
    }

    cout << res;

    return 0;
}
