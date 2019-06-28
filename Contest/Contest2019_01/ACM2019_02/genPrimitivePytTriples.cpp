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

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

vector<vector<int> > genPrimitivePytTriples(int n){
	vector<vector<int> > ret;
	for (int r = 1; r * r <= n; r++){
		for (int s = (r % 2 == 0) ? 1 : 2; s < r; s+=2){
			if(gcd(r,s) == 1){
				vector<int> t;
				t.push_back(r * r + s * s); // z
				t.push_back(2 * r * s); // y
				t.push_back(r * r - s * s); // x
				if(t[0] <= n){
					ret.push_back(t);
				}
			}
		}
	}
	sort(ret.begin(), ret.end());
	return ret;
}

/*
// sinh bo 3 pytago nguyen thuy voi x, y, z <= n
// a^2 + b^2 == c^2
// To generate all primitive triples:
// a = m^2 - n^2, b = 2mn, c = m^2 + n^2 (m > n)
// Primitive triples iff gcd(m, n) == 1 && (m - n) % 2 == 1

Conditions for primitive triples are:
a^2 + b^2 = c^2
gcd(a,b) = 1
a and c are odd and b is even.
a, b, c <= n;

*/
ll n;
// n <= 10^5
int main() {
	//freopen("09.in", "r", stdin);
	//freopen("09.ans", "w", stdout);
	
	
	cin >> n;
	vector<vector<int> > result = genPrimitivePytTriples(n);
	cout << result.size();
	/*
	for (int i = 0; i < result.size(); i++){
		vector<int> temp = result[i];
		for (int j = 0; j < temp.size(); j++){
			cout << temp[j] << " ";
		}
		cout << endl;
	}
	*/
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



