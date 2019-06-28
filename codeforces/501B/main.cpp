#include <bits/stdc++.h>
#define ll long long int
#define Max 5000
#define ipair pair<string,string>

using namespace std;

map<string, string> parent;
map<string, ll> _rank;

ipair query[Max], ansString[Max];
set<string> s;

string findParent(string str) {
    if(parent[str] != str) {
        _rank[str]++;
        parent[str] = findParent(parent[str]);
    }
    return parent[str];
}

void unionNode(string x, string y) {
    string u = findParent(x), v = findParent(y);
    parent[v] = u;
}

int main() {
    ll n;
    cin >> n;

    for(ll i = 0 ; i < n ; i++) {
        string x, y;
        cin >> x >> y;

        query[i].first = x;
        query[i].second = y;
        s.insert(x);
        s.insert(y);
    }

    vector<string> vt(s.begin(), s.end());
    for(ll i = 0 ; i < vt.size() ; i++) {
        parent[vt[i]] = vt[i];
        _rank[vt[i]] = 0;
    }

    for(ll i = 0 ; i < n ; i++) {
        unionNode(query[i].first, query[i].second);
    }

    ll numAns = 0;
    for(ll i = 0 ; i < vt.size() ; i++) {
        string _parent = findParent(vt[i]);
        string node = vt[i];
      //  cout << "0 -> " << node << " -> " << _parent << " : " << _rank[node] << endl;
        if(_parent != node && _rank[node] < 2) {
          //  cout << "1 -> " << node << " -> " << _parent << endl;
            ansString[numAns].first = _parent;
            ansString[numAns].second = node;
            numAns++;
        }
    }

    cout << numAns << endl;
    for(ll i = 0 ; i < numAns ; i++){
        cout << ansString[i].first << " " << ansString[i].second << endl;
    }



    return 0;
}
