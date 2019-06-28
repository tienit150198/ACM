#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n,a,b;
ll t[Max];

int main()
{
    ios::sync_with_stdio(false);

    cin >> n >> a >> b;
    ll temp = 0;
    for(ll i = 0 ; i < n; i++){
        cin >> t[i];
        if(t[i] <= a)
            temp++;
    }
    if(a > b){
        cout << n;
    }
    else{
        cout << temp/2 + (temp%2 == 1 ? 1 : 0);
    }

    return 0;
}
