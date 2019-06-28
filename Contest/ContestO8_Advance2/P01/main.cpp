#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
using namespace std;
ll n, m;
ll a[Max], b[Max];

ll isSearch(ll a[], ll key){
	ll l = 0, r = n - 1;
	ll mid = ( l + r ) / 2 ;
	while(l != mid && r != mid){
		if(a[mid] >= key){
			r = mid;
		}
		else
			l = mid;
		mid = (l + r ) /2 ;
	}
	for(ll i = l ; i <= r ;i++)
		if(a[i] >= key)
			return i+1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i <n ;i++){
        cin >> a[i];
        if(i > 0)
            a[i] += a[i - 1];
    }
    cin >> m;
    for(ll i = 0 ; i < m; i++)
        cin >> b[i];

	ll j = 0;
	for(ll i = 0 ; i < n && j < m; i++){
		cout <<isSearch(a,b[j++]) << " ";
	}

    return 0;
}
