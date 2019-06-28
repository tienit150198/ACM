#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n;
ll a[107];
bool b[107];
ll x, y;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> x;
    while(x--){
        ll tmp;
        cin >> tmp;
        b[tmp] = true;
    }
    cin >> y;
    while(y--){
        ll tmp;
        cin >> tmp;
        b[tmp] = true;
    }

    for(ll i = 1 ; i <= n; i++)
    if(!b[i]){
        cout <<"Oh, my keyboard!";
        return 0;
    }
    cout << "I become the guy.";
    return 0;
}
