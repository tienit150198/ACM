#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    string str;
    cin >> str;
    ll s = 0, f = 0;
    for(ll i = 0 ; i < str.size()-1; i++){
        if(str[i] == 'S' && str[i + 1] == 'F')
            s++;
        else if(str[i] == 'F' && str[i + 1] == 'S')
            f++;
    }

    cout << (s > f ? "YES" : "NO");

    return 0;
}
