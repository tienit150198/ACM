#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    if(n <= 2){
        cout << -1;
        return 0;
    }
    for(ll i = 2 ; i <= n; i++)
        cout << i << " ";
    cout  << 1;


    return 0;
}
