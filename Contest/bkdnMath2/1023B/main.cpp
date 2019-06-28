#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define limit 10007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll n, k;

int main() {
    fast
    cin >> n >> k;
    if(k - 1 <= n){
        cout << (k-1)/2;
    }else{
        cout << max(0LL,(n - (k - n) + 1 )/2);
    }

    return 0;
}
