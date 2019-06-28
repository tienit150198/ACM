#include "bits/stdc++.h"
#define ll long long int
#define iPair pair<int, int>
#define INF 100000000
using namespace std;

class G {
	private:
		int V;
		list<iPair> *adj;
	public:
		G(int V = 0);
		void addEdge(int u, int v, int w = 0);
		void dijkstra(int s, int end);
};
G::G(int V){
	this->V = V;
	this->adj = new list<iPair>[V];
}
void G::addEdge(int u, int v, int w){
	this->adj[u].push_back(make_pair(v, w));
	this->adj[v].push_back(make_pair(u, w));
}
void G::dijkstra(int s, int end){
	priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
	// s -> all vert = INF
	vector<int> dist (V, INF);
	vector<bool> check(V, false);
	
	dist[s] = 0; // dis s -> s = 0
	pq.push(make_pair(dist[s], s)); 
	
	list<iPair>::iterator it;
	
	while(!pq.empty()){
		iPair temp = pq.top();
		int u = temp.second;
		pq.pop();
		check[u] = true;
		
		for (it = adj[u].begin(); it != adj[u].end(); it++){
			int v = it->first;
			int w = it->second;
			if(!check[v] && dist[v] > dist[u] + w){
				dist[v] = dist[u] + w;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	if(dist[end] == INF){
		cout << -1; 
	}
	else {
		cout << dist[end];
	}
	
}

ll n, m;
ll u, v;

int main(){
	//freopen("09.in", "r", stdin);
	//freopen("09.ans", "w", stdout);
	cin >> n >> m >> u >> v;
	G g(n);
	ll x, y, z;
	for (int i = 0; i < m; i++){
		cin >> x >> y >> z;
		g.addEdge(x, y, z);
	}
	
    g.dijkstra(u, v);
    
	return 0;
}
