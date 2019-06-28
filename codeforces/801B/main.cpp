#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

string x,y;

int main() {
    ios::sync_with_stdio(false);
    cin >> x >> y;

    bool f =false;
    for(ll i = 0 ; i < x.size() ; i++){
        if(y[i] > x[i]){
            f = true;
            break;
        }
    }
    if(f)
        cout << -1;
    else
        cout << y;

    return 0;
}
