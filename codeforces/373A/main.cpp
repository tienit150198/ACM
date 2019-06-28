#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
map<ll,ll>t;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < 16 ; i++){
        char tmp;
        cin >> tmp;

        if(tmp == '.')
            continue;

        t[tmp - '0']++;
    }

    map<ll,ll>::iterator it = t.begin();
    bool f = false;
    while(it != t.end()){
        if(it->second > n*2){
            f = true;
            break;
        }
        it++;
    }

    if(f)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
