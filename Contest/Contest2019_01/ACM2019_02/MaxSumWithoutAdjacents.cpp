#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define EACH(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)

#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) { cout << #a << " = "; FOR(_,1,n) cout << a[_] << ' '; cout << endl; }
#define PR0(a,n) { cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl; }

#define sqr(x) ((x) * (x))

#define ll long long int
#define MOD 1000000007
#define MN 100005

using namespace std;
void checkDefine();

ll cal(ll a[], ll n){
	ll sum = 0;
	if(n == 1) return a[0];
	if(n == 2) return max(a[0], a[1]);
	
	ll dp[n];
	dp[0] = a[0];
	dp[1] = max(a[0], a[1]);
	FOR(i, 2, n - 1){
		dp[i] = max(a[i] + dp[i-2], dp[i-1]);
	}
	return dp[n - 1];
}
ll a[MN];
ll n;

int main() {
	cin >> n;
	FOR(i, 0, n - 1){
		cin >> a[i];
	}	
	cout << cal(a, n);
	return 0;
}

void checkDefine(){
	ll n, a[MN];
	map<ll, ll> m;
	cin >> n;
	FOR(i, 0, n - 1) {
		cin >> a[i];
		m[a[i]]++;
	}

	string s; cin >> s;
	DEBUG(s);
	PR0(a, n);
	DEBUG("------------");
	EACH(it, m){
		cout << it->first << " " << it->second << endl;
	}
}



