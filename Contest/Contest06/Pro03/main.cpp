#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
#define Max 1011
using namespace std;

ll n, m;
list<ll> a[Max];

ll greedyColoring(){
    ll res[n];
    bool vst[n];

    res[0] = 0;
    vst[0] = false;

    // init
    for(ll i = 1 ; i < n; i++){
        res[i] = -1;
        vst[i] = false;
    }

    // process
    for(ll i = 1 ; i < n; i++){

        //duyet danh dau nhung diem da co mau
        list<ll>::iterator it = a[i].begin();
        while(it != a[i].end()){
            if(res[*it] != -1){
                vst[res[*it]] = true;
            }
            it++;
        }

        //lay diem chua danh dau dau tien
        ll cr;
        for(cr = 0; cr < n ; cr++){
            if(!vst[cr])
                break;
        }

        res[i] = cr;

        // bo danh dau de xet cac diem tiep theo
        it = a[i].begin();
        while(it != a[i].end()){
            if(res[*it] != -1)
                vst[res[*it]] = false;
            it++;
        }
    }

    ll _max = 0;
    for(ll i = 0 ; i < n; i++){
     //   cout << i << " -> " << res[i] << endl;
        _max = max(res[i],_max);
    }
    return _max + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;

    ll u, v;
    for(ll i = 0 ; i < m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    cout << greedyColoring();



    return 0;
}
