#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll getDate(ll t, ll n){
    switch(t){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 2:
        if(n%4 == 0 && n % 100 != 0 || n % 400 == 0)
            return 29;
        return 28;
    }
    return 30;
}

int main()
{
    ios::sync_with_stdio(false);
    ll ng, t, n;
    cin >> ng >> t >> n;

    ll d = getDate(t,n);

    if(ng <= 0 || ng > d || t < 0 || t > 12 )
        cout <<"NO";
    else
        cout <<"YES";
    return 0;
}
