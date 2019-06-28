#include "bits/stdc++.h"
#define ll long long int
#define MOD 1000000007
#define MN 100005

using namespace std;
ll n;
ll a[MN];
ll S;

int main(){
	//freopen("01.in", "r", stdin);
	//freopen("01.ans", "w", stdout);
	
	cin >> n;
	cin >> S;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}	
	ll res = 0;
	ll sum = 0;
	int j = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
		while(sum - a[j] >= S){
			sum -= a[j];
			j++;
		}
		
		if(sum >= S){
			res += j + 1;
		}
	}
	cout << res;
	
	return 0;
}
