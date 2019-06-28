#include <bits/stdc++.h>

#define FOR(i, a, b) for(int i = (a) ; i <= (b) ; ++i)
#define FOD(i, a, b) for(int i = (a) ; i >= (b) ; --i)
#define RP(i, a, b) for(int i = (a) ; i < (b) ; ++i)
#define FORE(i, a) for(__typeof((a).begin()) i = (a).begin() ; i != (a).end() ; ++i)
#define FRSZ(i, a) for(int i = 0 ; i < (a).size() ; ++i)
#define FPSZ(i, a) for(int i = 0 ; i < (a).size() - 1 ; ++i)
#define RPSZ(i, a) for(int i = 1 ; i < (a).size() ; ++i)
#define FDSZ(i, a) for(int i = (a).size() - 1 ; i >= 0 ; --i)

#define ALL(x) (x).begin(),(x).end()
#define Bit(x, y) (((x) >> ((y) - 1)) & 1)
#define NumBit(x) (__builtin_popcount(x))
#define __unique(a) sort((a).begin(), (a).end()), a.resize(unique(a.begin(), a.end()) - a.begin())

#define SET(x) memset(x, -1, sizeof x)
#define CLR(x) memset(x, 0, sizeof x)
#define BIG(x) memset(x, 0x3f3f3f3f, sizeof x);

#define debugarr(a, n) {FOR(_, 1, n) printf("%d ", (a)[_]); cout << endl;}
#define debugvi(x) {FRSZ(_, x) cout << (x)[_] << " " ; cout << endl;}
#define debug(x) cout << #x << " = " << (x) << endl;

#define fi first
#define se second
using namespace std;

template <typename T> void Read(T &x){
	char ch;
	bool neg = 0;
	x = 0;
	while(!isdigit(ch = getchar()) && ch != '-');
	if (ch == '-') {neg = 1; ch = getchar();}
	do{x = x * 10 + ch - 48;} while(isdigit(ch = getchar()));
	if (neg) x = -x;
	return;}
template <typename T> void Write(T x){
	char ch[32];
	int cnt = 0;
	bool neg = 0;
	if (x < 0) {neg = 1; x = -x;}
	do{ch[++cnt] = x % 10 + 48 ; x /= 10;} while(x);
	if (neg) putchar('-');
	FOD(i, cnt, 1) putchar(ch[i]);}
template <typename T> void Writenm(T x, int num){
    char ch[32];
	int cnt = 0, cntDigit = 0;;
	bool neg = 0;
	if (x < 0) {neg = 1; x = -x;}
	do{ch[++cnt] = x % 10 + 48 ; x /= 10; ++cntDigit;} while(x);
	if (neg) putchar('-');
	FOR(i, cntDigit + 1, num) putchar('0');
	FOD(i, cnt, 1) putchar(ch[i]);}
template <typename T> void Writeln(T x){
	Write(x);
	putchar('\n');}
template <typename T> void Writesp(T x){
	Write(x);
	putchar(' ');}

const int MAX = 10005;
int n, m;
bool kt[MAX];
vector<int> adj[MAX];

void Enter(){
	int u, v;
	Read(n); Read(m);
	FOR(i, 1, m){
		Read(u); Read(v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
}

int DFS(int u){
	kt[u] = 1;
	int ans = 1;
	FRSZ(i, adj[u])
		if (!kt[adj[u][i]]){
			ans += DFS(adj[u][i]);
		}
	return ans;
}

int main(int argc, char const *argv[])
{
	Enter();
	vector<int> res;
	CLR(kt);
	FOR(i, 1, n)
		if (!kt[i]) 
			res.push_back(DFS(i));
	sort(res.begin(), res.end(), greater<int> ());

	if (res.size() == 1) Write(res[0]);
	else Write(res[0] + res[1]);
	return 0;
}
