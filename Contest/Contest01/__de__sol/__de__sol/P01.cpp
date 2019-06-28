#include "bits/stdc++.h"
#define ll long long int
#define MN 100005
using namespace std;

ll N;
ll a[MN];
map<ll, ll> m;

int main(){
	//freopen("09.in", "r", stdin);
	//freopen("09.ans", "w", stdout);
	
	cin >> N;
	ll value = 0;
	ll idx = 0;
	
	for (int i = 0; i < N; i++){
		cin >> a[i];
		m[a[i]]++;		
	}
	for (int i = 0; i < N; i++){
		if(value < m[a[i]]){
			value = m[a[i]];
			idx = i;
		}
	}
	
	cout << a[idx];
	return 0;
}
