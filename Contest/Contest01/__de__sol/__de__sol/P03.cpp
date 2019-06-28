#include "bits/stdc++.h"
#define ll long long int
#define MN 1000005
using namespace std;

ll a, b;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}
int main(){
	
	//freopen("09.in", "r", stdin);
	//freopen("09.ans", "w", stdout);
	
	cin >> a >> b;
	ll res = a / gcd(a, b);
	res *= b;
	cout << res;
	
	return 0;
}
