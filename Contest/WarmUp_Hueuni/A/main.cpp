#include <bits/stdc++.h>
#define ll long long int
#define spair pair<string,string>
#define Max 100007
using namespace std;

map<string,string> parent;
map<string, ll> _rank;

spair query[Max];

string findParent(string idx){
    if(parent[idx] != idx){
        parent[idx] =  findParent(parent[idx]);
    }
    return parent[idx];
}

ll unionNode(string x, string y){
    string px = findParent(x), py = findParent(y);

    if(px == py)
        return _rank[px];
    if(_rank[px] < _rank[py]){
        parent[px] = py;
        _rank[py] += _rank[px];
        return _rank[py];
    }else if(_rank[px] >= _rank[py]){
        parent[py] = px;
        _rank[px] += _rank[py];
        return _rank[px];
    }/*else{
        parent[py] = px;
        _rank[px]++;
        return _rank[px];
    }*/
}
// WRONG
int main()
{
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        for(ll i = 1 ; i <= n; i++){
            string x, y;
            cin >> x >> y;

            parent[x] = x;
            parent[y] = y;
            _rank[x] = 1;
            _rank[y] = 1;

            query[i].first = x;
            query[i].second = y;
        }

        for(ll i = 1 ; i <= n; i++){
            string x = query[i].first, y = query[i].second;

            cout << unionNode(x,y) << endl;
        }



    }
    return 0;
}
