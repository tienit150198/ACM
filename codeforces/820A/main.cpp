#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll c, v0,v1,a, l;

int main() {
    ios::sync_with_stdio(false);
    cin >> c >> v0 >> v1 >> a >> l;

    if(v0 >= c){
        cout << 1;
        return 0;
    }
    ll ans = 0;
    ans = 1;

    ll read = v0, pos = v0;
    while(pos < c){
        read = min(v1,read + a);
        pos += read - l;
        ans++;
    }

    cout <<ans;


    return 0;
}
