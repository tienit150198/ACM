#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

#define L 12
#define S 110

int ans;
char a[S];

ll check(const ll &x,const ll &y){
	for(ll i=0;i<y;i++){ll flag=1;
		for(ll j=i;j<L;j+=y){
			if(a[j]!='X'){
				flag=0;
				break;
			}
		}
		if(flag)return 1;
	}
	return 0;
}

int main(){
	ll T;
	cin >> T;
	while(T--){
		cin >> a;
		ans=0;
		for(ll i=1;i<=L;i++){
			if(L%i)continue;
			ll j=L/i;
			if(check(i,j))ans++;
		}
		cout << ans << " ";
		for(ll i=1;i<=L;i++){
			if(L%i)continue;
			ll j=L/i;
			if(check(i,j))
                cout << i <<"x" << j << " ";
		}
		cout << endl;
	}
	return 0;
}
