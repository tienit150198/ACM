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
#define X first
#define Y second

using namespace std;
void checkDefine();

typedef pair<int, int> ii;
ii a[MN];
ll n;
priority_queue<int, vector<int>, greater<int> > q;

int main() {
	freopen("09.in", "r", stdin);
	freopen("09.ans", "w", stdout);
	cin>>n;
    for (int i= 1; i<=n; ++i) cin>>a[i].X;
    for (int i= 1; i<=n; ++i) cin>>a[i].Y;
    sort (a+1, a+n+1);
    int rs = 1;
    q.push(a[1].X+ a[1].Y-1);
    for (int i= 2; i<=n; ++i) {
        int tu = q.top();
        q.pop();
        if (tu< a[i].X)
            q.push(a[i].X+ a[i].Y-1);
        else {
            ++rs;
            q.push(tu);
            q.push(a[i].X+ a[i].Y-1);
        }
    }
    cout<<rs;
    
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




