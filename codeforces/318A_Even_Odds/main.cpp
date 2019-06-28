#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, k;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> k;

    ll t = n / 2;
    if(n%2)
        t++;
    if(k <= t){
        cout << k * 2 - 1;
    }
    else{
        cout << (k - t) * 2;
    }


    return 0;
}
