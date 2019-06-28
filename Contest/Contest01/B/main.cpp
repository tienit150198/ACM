#include "bits/stdc++.h"
#define ll long long int
#define MN 1000005
using namespace std;

ll N;
ll a[MN];

int main(){

	//freopen("09.in", "r", stdin);
	//freopen("09.ans", "w", stdout);


	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> a[i];
	}


	ll res = a[0];
	ll sum = a[0];
	for (int i = 1; i < N; i++){
		sum = max(a[i], sum + a[i]);
		res = max(res, sum);
	}
	cout << res;

	return 0;
}
