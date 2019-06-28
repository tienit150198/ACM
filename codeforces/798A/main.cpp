#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

string str;

int main() {
    fast
    cin >> str;

    ll t = 0, n = str.size();

    for(ll i = 0 ; i < (n+1)/2; i++){
        if(str[i] != str[n - i - 1])
            t++;
    }

    if(t == 1 || t == 0 && n %2 )
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
