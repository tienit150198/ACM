#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
using namespace std;

ll n;
ll a[Max], f[Max];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i < n; i++)
        cin >> a[i];

    ll _max = 0;
    for(ll i = 1 ; i < n; i++){
        for(ll j = 0 ; j < i; j++){
            if(a[i] > a[j]){
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }

    for(ll i = 0 ; i < n;i++){
//        cout << f[i] << " ";
        _max = max(f[i],_max);
    }

    cout << _max + 1;

    return 0;
}
