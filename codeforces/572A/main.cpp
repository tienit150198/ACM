#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll nA,nB;
ll k,m;
ll a[Max], b[Max];

void in(ll a[], ll n){
    for(ll i = 0 ; i < n; i++)
        cin >> a[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin >> nA >> nB;

    cin >> k >> m;

    in(a,nA);
    in(b,nB);

    sort(a,a+nA);
    sort(b,b+nB, greater<ll>());

    if(a[k - 1] < b[m - 1])
        cout <<"YES";
    else
        cout <<"NO";

    return 0;
}
