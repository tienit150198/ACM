#include <bits/stdc++.h>
#define ll long long int
#define Max 200
using namespace std;

ll a[Max];
ll n, k;

ll slove(ll n, ll k){
    ll res = 1;
    if(k > n - k)
        k = n-k;
    for(ll i = 0; i < k ; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main()
{
    cin >> n >> k;
    ll c = 0;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
        if(a[i]%2 == 0)
            c++;
    }

    if(k == 1){
        cout << c;
        return 0;
    }
    if(c < k){
        cout << 0;
        return 0;
    }

    cout << slove(c,k);

    return 0;
}
