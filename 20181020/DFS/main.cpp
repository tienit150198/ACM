#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
using namespace std;

class G{
private:
    ll v;
    list <ipair> *adj;
public:
    G(ll v = 0);
    void addEdge(ll u, ll v, ll w = 0);
    void DFSUtil(ll v, bool visible[]);
    void DFS(ll s);
};

G::G(ll v){
    this->v = v;
    this->adj = new list<ipair>[v];
}

void G::addEdge(ll u, ll v, ll w){
    this->adj[u].push_back(make_pair(v,w));
}

void G::DFSUtil(ll v, bool visible[]){
    visible[v] = true;
    cout << v << " ";

    list<ipair>::iterator it;
    for(it = adj[v].begin() ; it != adj[v].end() ; it++){
        if(!visible[it->first])
            DFSUtil(it->first,visible);
    }
}

void G::DFS(ll s){
    bool visible[v];

    for(ll i = 0 ; i < v; i++){
        if(!visible[i])
            DFSUtil(s,visible);
    }

}

int main(){
    G g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversaln" << endl;
    g.DFS(2);
    return 0;
}
