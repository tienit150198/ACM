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
#define N (ll)(1e6) + 5

using namespace std;
void checkDefine();

//http://ntucoder.net/Problem/Details/5610

ll T;
ll phi[N] = {0}, primes[N] = {0};
ll f[N] = {0};

void phiEuler(){
	primes[1] = 1;
	FOR(i, 2, N - 2){
		if(primes[i] == 0){
			primes[i] = i;
			if(i <= (ll)sqrt(N)){
				for (int j = i * i; j <= N - 2; j+= i){
					primes[j] = i;
				}
			}
		}
		int fac = i;  ///tinh phi ham Euler
        int u = i;
        int d = primes[i];
        while (u % d == 0){
            fac -= fac/d;
            while (u % d == 0) u /= d;
            d = primes[u];
            if (d == 1) break;
        }
        if (u > 1) fac-= fac/u;
        phi[i] = fac;
	}
	for (int i = 1; i <= (N/2) + 1; i++){
		for (int j = 2*i; j <= N - 2; j+=i){
			f[j] += (ll)phi[j/i]*(ll)i;
		}
	}
	FOR(i, 1, N - 2) {
		f[i] += f[i-1];
	}
}

int n;

int main() {
	freopen("09.in", "r", stdin);
	freopen("09.ans", "w", stdout);
	
	phiEuler();
    cin >> T;
    while (T--){
        cin >> n;
        cout << f[n];
        //cout << phi[n] << '\n';
        if(T > 0) cout << endl;
    }
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




