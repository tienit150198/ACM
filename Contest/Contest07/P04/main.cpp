#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
using namespace std;
ll n;
ll a[Max];
map<ll,ll> t;
int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
        t[a[i]]++;
    }

    ll res = 0;
    for(ll i = 0 ; i < n; i++){
    	t[a[i]]--;
    	res += t[-a[i]];
    		
	}

    cout << res;

    return 0;
}
