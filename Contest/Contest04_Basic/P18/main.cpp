#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    bool flag = false;
    ll a[n];
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
        if(i > 0){
            if(a[i] < a[i - 1])
                flag = true;
        }
    }
    if(flag)
        cout <<"NO";
    else
        cout <<"YES";

    return 0;
}
