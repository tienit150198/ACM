#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, a, b, c;

ll isMin(ll a, ll b, ll c){
    return min(a,min(b,c));
}


int main() {
    ios::sync_with_stdio(false);
    cin >> n >> a >> b >> c;

    /*
    a: rb && owl
    b: rb && eey
    c: owl && eey
    */

    if(n == 1){
        cout << 0;
        return 0;
    }
    if(isMin(a,b,c) == a || isMin(a,b,c) == b){
        cout << min(a,b) * ( n - 1);
        return 0;
    }

    cout << min(a,b) + c*(n-2);


    return 0;
}
