#include <bits/stdc++.h>
#define ll long long int
#define Max 1011
using namespace std;
ll f[Max], a[Max];
ll n;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i];

    ll _max = 0;
    for(ll i = 0; i < n ; i++){
        _max = 0;
        for(ll j = 0 ; j < i ;j++){
            if(a[i] > a[j]){
                _max = max(f[j]+1,_max);
            }
        }
        f[i] = _max;
    }
	_max = 0;
    for(ll i = 0 ; i < n; i++){
    	_max = max(_max,f[i]);
	}
	
	cout << _max + 1;
       // cout << f[i] << " ";


    return 0;
}
