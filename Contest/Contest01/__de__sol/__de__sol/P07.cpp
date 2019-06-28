#include "bits/stdc++.h"
#define ll long long int
#define MOD 1000000007
#define MN 100005
using namespace std;


ll n, m;
ll a[MN];
ll M[MN][24];

int main(){
	//freopen("09.in", "r", stdin);
	//freopen("09.ans", "w", stdout);
	
	int i,k;
	cin >> n >> m;
	for (i = 1; i <= n; i++) cin >> a[i];
	for (i = 1; i <= n; i++) M[i][0]= a[i];
	
	for (k = 1; (1<<k) <= n; k++)
	for (i = 1; i+(1<<k)-1 <= n; i++)
		M[i][k] = max(M[i][k-1], M[i+(1<<(k-1))][k-1]);
	
	int u, v;
	while(m--){
		cin >> u >> v;
		k = log2(v-u+1);
		if(m == 0){
			cout << max(M[u][k],M[v-(1<<k)+1][k]);
		}
		else {
			cout << max(M[u][k],M[v-(1<<k)+1][k])<<endl;
		}
	}

	return 0;
}
