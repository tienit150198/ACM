#include "bits/stdc++.h"
#define ll long long int
#define MOD 1000000007
#define MN 1000005

using namespace std;

ll n;
bool primes[MN];

bool check(ll n){
	for (int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}

void sang(int n){
	for (int i = 0; i < MN; i++) primes[i] = true;
	primes[0] = primes[1] = false;
	for (int i = 2; i * i <= n; i++){
		if(primes[i] == true){
			for (int j = i * i; j <= n; j += i){
				primes[j] = false;
			}
		}
	}
}

ll l, r;
ll t;
int main(){
	//freopen("09.in", "r", stdin);
	//freopen("09.ans", "w", stdout);
	cin >> t;
	sang(1000002);
	int c = 0;
	while(t--){
		c = 0;
		cin >> l >> r;
		
		for (int i = l; i <= r; i++){
			if(primes[i]){
				c++;
			}
		}
		
		if(t == 0){
			cout << c;
		}
		else{
			cout << c << endl;
		}
	}
	
	return 0;
}

