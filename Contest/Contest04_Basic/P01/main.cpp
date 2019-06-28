#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    ll res = 1;
    ll tmp = sqrt(n);

    if(n <= 1){
        cout <<"No";
        return 0;
    }

    for(ll i = 2 ; i <= tmp ; i++){
        if(n%i == 0){
            res += i + n/i;
            if(i == n/i)
                res -= i;
        }
    }

    if(res == n)
        cout <<"Yes";
    else
        cout << "No";

    return 0;
}
