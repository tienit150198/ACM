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

string s, t;
/*
Abc
cab
*/

int main() {
	cin >> s >> t;
	if(s.size() != t.size()){
		cout << "Not Anagrams"; return 0;
	}
	int n = s.size();
	map<int, int> m;
	
	FOR(i, 0, n - 1){
		if('a' <= s[i] && s[i] <= 'z'){
			m[s[i] - 'a']++;
		}	
		if('A' <= s[i] && s[i] <= 'Z'){
			m[s[i] - 'A']++;
		}	
		
		if('a' <= t[i] && t[i] <= 'z'){
			m[t[i] - 'a']--;
		}	
		if('A' <= t[i] && t[i] <= 'Z'){
			m[t[i] - 'A']--;
		}	
	}
	FOR(i, 0, 26){
		if(m[i] != 0) {
			cout << "Not Anagrams"; return 0;	
		}
	}
	
	cout << "Anagrams";
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



