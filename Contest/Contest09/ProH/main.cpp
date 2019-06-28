#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
#define pb push_back
#define mp make_pair
using namespace std;

class G{
    ll n;
    list<ipair> *a;
public:
    G(ll n = 0){
        this->n = n;
        this->a = new list<ipair>[n];
    }
    void addEdge(ll u, ll v, ll w = 0){
        this->a[u].pb(mp(v,w));
        this->a[v].pb(mp(u,w));
    }
    void shortestPath(ll s){
        priority_queue<ipair, vector<ipair>, greater<ipair> > pq;
        vector<ll> dist(n,INT_MAX);

        pq.push(mp(0,s));
        dist[s] = 0;

        while(!pq.empty()){
            ll u = pq.top().second;
            pq.pop();

            list<ipair>::iterator it = a[u].begin();

            while(it != a[u].end()){
                ll v = it->first;
                ll w = it->second;

                if(dist[v] > dist[u] + w){
                    dist[v] = dist[u] + w;
                    pq.push(mp(dist[v],v));
                }

                it++;
            }
        }

        for(ll i = 0 ; i < n; i++)
            cout << i << " " << dist[i] << endl;
    }
};

int main(){
    int V = 9;
    G g(V);

    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.shortestPath(0);
    return 0;
}
