#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
string str;

int main() {
    fast
    cin >> n >> str;

    ll t = 0;
    for(ll i = 0 ; i < n-2 ; i++){
        if(str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0')
            t++;
    }
    cout << max(t-1,0LL);

    return 0;
}
