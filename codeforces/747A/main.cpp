#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    ll _sqrt = sqrt(n);

    for(ll i = _sqrt ; i >= 1 ; i++){
        if(n % i == 0){
			if(i < n / i){
				cout << i << " " << n/i;
				return 0;
			}
			else {
				cout << n/i << " " << i;
				return 0;
			}
		}
    }
    cout << 1 << " " << n;
    return 0;
}
