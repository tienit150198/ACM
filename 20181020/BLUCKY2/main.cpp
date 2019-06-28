#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;

    if(n%7 == 0){
        ll t = n/7;
        while(t--){
            cout << 7;
        }
    }
    else{
        ll t = n%7;
        ll t1 = n/7;

        while(t % 4 != 0 && t1 > 0){
            t1--;
            t += 7;
        }

        if(t % 4 != 0){
            cout << -1;
            return 0;
        }

        for(ll i = 0 ; i < t / 4; i++)
            cout << 4;

        for(ll i = 0 ; i < t1; i++)
            cout << 7;


    }

    return 0;
}
