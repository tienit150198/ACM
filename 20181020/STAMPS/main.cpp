#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;

ll s, n;
ll a[Max];

ll process(ll a[]){
    ll res = 0;
    ll count = 0;
    for(ll i = 0 ; i < n && res < s; i++){
        res += a[i];
        count++;
    }
    if(res >= s)
        return count;

    return 0;
}

int main()
{
    cin >> s >> n;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i];

    sort(a,a+n,greater <ll>() );

    cout << process(a);

    return 0;
}
