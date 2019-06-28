#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
using namespace std;

ll path[1000];
ll t = 0;
ll m, n , k;
class G{
private:
    ll v;
    list<ipair> *adj;
public:
    G(ll v = 0);
    void addEdge(ll u, ll v, ll c);
    ll shortestPath(ll pathStart, ll pathEnd);
};

G::G(ll v){
    this->v = v;
    this->adj = new list<ipair>[v];
}

void G::addEdge(ll u, ll v, ll c){
    this->adj[u].push_back(make_pair(v,c));
    this->adj[v].push_back(make_pair(u,c));
}

ll G::shortestPath(ll pathStart, ll pathEnd){
    t = 0;
    priority_queue <ipair, vector<ipair>, greater<ipair> > pq;

    vector<ll> dist(v,INT_MAX);
    vector<bool> check (v, false);
    dist[pathStart] = 0;
    pq.push(make_pair(dist[pathStart],pathStart));
    path[t++] = pathStart;

    while(!pq.empty()){
        ll u = pq.top().second;
        check[u] = true;
        pq.pop();

        list<ipair>::iterator it;
        for(it = adj[u].begin() ; it != adj[u].end() ; it++){
            ll v = it->first;
            ll c = it->second;

            if(check[v] && dist[v] > dist[u] + c){
//                cout << u << " " << dist[u] << endl;
//                cout << v << " " << dist[v] << endl;

                dist[v] = dist[u] + c;
                pq.push(make_pair(dist[v],v));
                path[t] = v;
            }
        }
        t++;
    }
    return dist[pathEnd];
}

void pathDijkstra(ll pathStart, ll pathEnd){
    for(ll i = 0; i <= t; i++)
        cout << path[i] << " ";
}


int main()
{
    cin >> n >> m >> k;
    G a(m+1);
    ll u, v, c;
    for(ll i = 0 ; i < m ; i++){
        cin >> u >> v >> c;
        a.addEdge(u,v,c);
    }

    for(ll i = 0 ; i < k ; i++){
        cin >> u >> v >> c;

        if(u == 0){
            cout << a.shortestPath(v,c) << endl;
        }
        else{
            a.shortestPath(v,c);
            pathDijkstra(v,c);
        }
    }

    return 0;
}
