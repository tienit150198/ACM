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

int a[MN];
int n;
int sum;
bool subset_sum(int [], int n, int sum){
	bool res[n+1][sum+1];
	FOR(i, 0, n){
		res[i][0]= true;
	}
	FOR(j, 1, sum){
		res[0][j] = false;
	}
	FOR(i, 1, n){
		FOR(j, 1, sum){
			if(res[i-1][j]){
				res[i][j] = true;
			}
			else {
				if(a[i-1] > j){
					res[i][j] = false;
				}
				else {
					res[i][j] = res[i-1][j-a[i-1]];
				}
			}
		}
	}
	return res[n][sum];
}
/*
sum > 0
a[i] > 0
n * sum
3 4
1 1 3 6
*/

int main() {
	cin >> n; cin >> sum;
	FOR(i, 0, n - 1) cin >> a[i];
	string res = subset_sum(a, n, sum) == 1 ? "yes" : "no";
	cout << res;
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



