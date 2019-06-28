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

class Graph {
	int V;
	list<int> *adj;
	bool isCyclicUtil(int u, 
		bool visited[], int parent);
	public:
		Graph(int v);
		void addEdge(int u, int v);
		bool isCyclic();
};
Graph::Graph(int v){
	this->V = v;
	this->adj = new list<int>[V];
}
void Graph::addEdge(int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool Graph::isCyclicUtil(int u, bool visited[], int parent){
	visited[u] = true;
	EACH(it, adj[u]){
		if(!visited[*it]){
			if(isCyclicUtil(*it, visited, u)){
				return true;
			}
		}
		else {
			if(*it != parent){
				return true;
			}
		}
	}
	return false;
}

bool Graph::isCyclic(){
	bool *visited = new bool[V];
	FOR(i, 0, V - 1){
		visited[i] = false;
	}
	FOR(u, 0, V-1){
		if(!visited[u]){
			if(isCyclicUtil(u, visited, -1)){
				return true;
			}
		}
	}
	return false;
}

int main() {
	Graph g1(9);
	g1.addEdge(7,6);
	g1.addEdge(6,5);
	g1.addEdge(2,8);
	g1.addEdge(3,4);
	g1.addEdge(5,4);
	g1.addEdge(2,5);
	g1.addEdge(0,1);
	g1.addEdge(1,2);
	
	//g1.addEdge(0, 8); // isCyclic
	// else: Not cyclic
	g1.isCyclic()? cout << "Graph is Cyclic" << endl:
	                 cout << "Graph is Not Cyclic" << endl;
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



