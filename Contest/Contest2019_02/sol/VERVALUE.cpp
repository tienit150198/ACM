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
#define maxn 100005
#define MN 100005

#define fto(i,a,b) for (int i=a;i<=b;i++)
#define fdto(i,a,b) for (int i=a;i>=b;i--)


using namespace std;
void checkDefine();

int n, q, t[maxn*4], z[maxn*4], start[maxn], endd[maxn], cnt=0, p[maxn];
vector <int> a[maxn];
void update(int u, int d, int c, int l, int r, int w)
{
    if (d>r || c<l) return;
    if (d>=l && c<=r) {
        t[u]=w;
        z[u]=w;
        return;
    }
    if (z[u]!=-1) {
        t[u*2]=z[u*2]=z[u];
        t[u*2+1]=z[u*2+1]=z[u];
        z[u]=-1;
    }
    int g=(d+c)/2;
    update(u*2, d, g, l, r, w);
    update(u*2+1, g+1, c, l, r, w);
    t[u]=(t[u*2]&t[u*2+1]);
}
int get (int u, int d, int c, int l, int r)
{
    if (d>r || c<l) return -1;
    if (d>=l && c<=r) return t[u];
    if (z[u]!=-1) {
        t[u*2]=z[u*2]=z[u];
        t[u*2+1]=z[u*2+1]=z[u];
        z[u]=-1;
    }
    int g=(d+c)/2;
    return (get(u*2, d, g, l, r)&get(u*2+1, g+1, c, l, r));

}
void dfs (int u, int par)
{
    start[u]=endd[u]=++cnt;
    for (int i=0; i<a[u].size(); i++) {
        int v=a[u][i];
        if (v!=par) {
            p[v]=u;
            dfs(v, u);
            endd[u]=max(endd[u], endd[v]);
        }
    }
}
int main(){
    freopen("09.in", "r", stdin);
	freopen("09.ans", "w", stdout);
	
	scanf("%d", &n);
    int u, v;
    fto (i,1,n-1) {
        scanf("%d%d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    p[u]=-1;
    dfs(1, 1);
    fto (i,1,4*maxn-1) z[i]=-1;
    scanf("%d", &q);
    fto (i,1,q) {
        scanf("%d%d", &u, &v);
        if (u==1) {
            if (v!=1 && get(1,1,n,start[v],endd[v])==0)
            		update(1,1,n,start[p[v]],start[p[v]],0);
            update(1,1,n,start[v],endd[v],1);
        }
        else if (u==2) {
            update(1,1,n,start[v], start[v],0);
        }
        else {
            cout << get(1,1,n, start[v], endd[v]) << '\n';
        }
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




