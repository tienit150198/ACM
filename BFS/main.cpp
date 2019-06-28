#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
using namespace std;

class G{
private:
    ll v;
    list<ipair> *adj;
public:
    G(ll v = 0);
    void addEdge(ll u, ll v, ll w = 0);
    void bfs(ll s);  // s is start
};

G::G(ll v){
    this->v = v;
    this->adj = new list<ipair>[v];
}

void G::addEdge(ll u, ll v, ll w){
    this->adj[u].push_back(make_pair(v,w));
}

void G::bfs(ll s){
    bool visible[v];

    queue<ipair> queuePair;
    ipair tmp(s,0);

    queuePair.push(tmp);
    visible[tmp.first] = true;

    list<ipair>::iterator it;

    while(!queuePair.empty()){
        tmp = queuePair.front();
        cout << tmp.first << " ";
        queuePair.pop();

        for(it = adj[tmp.first].begin(); it != adj[tmp.first].end(); it++){
            if(!visible[it->first]){
                visible[it->first] = true;
                queuePair.push(*it);
            }
        }
    }
}


int main()
{
    G g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(2);
    return 0;
}
