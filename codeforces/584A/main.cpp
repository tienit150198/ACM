#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, t;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> t;
    if(n == 1 && t == 10){
        cout << -1;
        return 0;
    }

    if(t == 10)
        n--;
    cout << t;
    for(ll i = 0 ; i < n-1 ; i++)
        cout << 0;

    return 0;
}
