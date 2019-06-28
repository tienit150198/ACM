#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;

int main(){
	ios::sync_with_stdio(false);
	cin >> n;
	if(n < 4){
		cout << -1 << endl;
		return 0;
	}

	ll t, t1, j, i;
	t = n % 7;
	t1 = n/7;
	if(t == 0){
		for(i = 0; i < t1; i++){
			cout << 7;
		}
	}else{
		while(t % 4 != 0 && t1 > 0){
			t1--;
			t += 7;
		}
		if(t % 4 != 0){
			cout << -1;
		}else{
			for(i = 0; i < t/4; i++){
				cout << 4;
			}
			for(i = 0; i < t1; i++){
				cout << 7;
			}
		}
	}

	return 0;
}
