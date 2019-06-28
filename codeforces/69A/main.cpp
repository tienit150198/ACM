#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;


int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    ll x = 0 , y = 0 , z = 0;
    ll a,b,c;
    for(ll i = 0 ; i < n ; i++){
        cin >> a >> b >> c;
        x += a, y += b, z += c;
    }

    if(x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
