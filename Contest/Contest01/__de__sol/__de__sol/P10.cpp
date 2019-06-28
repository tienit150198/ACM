#include "bits/stdc++.h"
#define ll long long int
#define MN 100005
using namespace std;

ll w;

ll a[21];
ll n;
ll res = 0;
void f(ll arr[], ll n){
	ll sum = 0;
	for (int i = 0; i < n; i++){
		sum += arr[i] * a[i];
	}
	if(sum <= w){
		res = max(res, sum);	
	}
	
}

void gen(ll n){
	ll arr[n];
	for (int i = 0; i < n; i++){
		arr[i] = 0;
	}
	do {
		f(arr, n);
		int i = n - 1;
		while(i >= 0 && arr[i] == 1)i--;
		if(i < 0) break;
		arr[i] = 1;
		for (int j = i + 1; j < n; j++){
			arr[j] = 0;
		}
	}while(true);
	
}

int main(){
	//freopen("01.in", "r", stdin);
	//freopen("01.ans", "w", stdout);
	
	cin >> n >> w;
	for (int i = 0; i < n;i++){
		cin >> a[i];
	}	
	gen(n);
	cout << res;
	
	return 0;
}
