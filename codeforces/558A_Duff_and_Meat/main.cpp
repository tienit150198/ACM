#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[Max], p[Max];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n ;i++)
        cin >> a[i] >> p[i];

    ll ans = 0;
    ll i = 0, j = 0;
    while(true){
        while(j < n - 1  && p[i] < p[j + 1])
            j++;
        if(i == j){
            ans += a[i]*p[i];
            i++; j++;
        }
        else{
            ll tmp = 0;
            for(ll k = i ; k <= j ; k++)
                tmp += a[k];
            ans += p[i] * tmp;
            i = j + 1;
            j++;
        }
        if(i > n - 1 || j > n - 1)
            break;
    }
    cout << ans;


    return 0;
}

/*
5
39 21
95 89
73 90
9 55
85 32

*/
