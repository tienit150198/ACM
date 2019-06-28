#include "bits/stdc++.h"
#define ll long long int
#define MOD 1000000007
#define MN 100005

using namespace std;
ll m, n;
ll a[MN];
ll b[MN];

ll bin(ll a[], ll n, ll x){
	ll l = 0, r = n - 1;
	while (l <= r){
		ll mid = (l + r) / 2;
		if(x == a[mid]){
			return 1;
		}
		else if(x < a[mid]){
			r = mid - 1;
		}
		else if(x > a[mid]){
			l = mid + 1;
		}
	}
	return -1;
}
ll s;
int main(){
	
	freopen("09.in", "r", stdin);
	freopen("09.ans", "w", stdout);
	
	cin >> m >> n >> s;
	for (int i = 0; i < m; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	sort(a, a + m);
	ll res = 0;
	for (int i = 0; i < n; i++){
		if(bin(a, m, s - b[i]) == 1)res++;
	}
	cout << res;
	return 0;
}

