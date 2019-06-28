#include <bits/stdc++.h>
#define ll long long int
using namespace std;
priority_queue<ll, vector<ll>, greater<ll> > path;
class G{
	ll v = 0;
	list<ll> *a;
	public:
		G(ll v = 0);
		void addEdge(ll u, ll v);
		void bfs(ll s);
};
G::G(ll v ){
	this->v = v;
	this->a = new list<ll>[v];
}

void G::addEdge(ll u, ll v){
  //  cout << u << " " << v << endl;
	this->a[u].push_back(v);
}
void G::bfs(ll s){
	bool visited[v];
	for(int i = 0 ; i <v ;i++){
		visited[i] = false;
	}
	queue<ll> q;
	q.push(s);
	visited[s] = true;

	while(!q.empty()){
		ll u = q.front();
		path.push(u);
		q.pop();
		list<ll>::iterator it = a[u].begin();
		while(it != a[u].end()){
         //   cout << *it << endl;
            if(!visited[*it]){
				q.push(*it);
				visited[*it] = true;
			}
			it++;
		}
	}
}

int main() {
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
	ll n, k;
	cin >> n >> k;

	G g(n+1);

	ll m, t ;
	for(ll i = 0 ; i < n; i++){
		cin >> m;
		for(ll j = 0 ; j < m; j++){
			cin >> t;
			g.addEdge(i,t-1);
		}
	}

	g.bfs(k-1);

	cout << path.size() << endl;
	while(!path.empty()){
        cout << path.top()+1 << " ";
        path.pop();
	}

	return 0;
}
