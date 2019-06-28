#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[Max];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    ll ans = n - 2;
    ll i = 1, j = n - 2;
    ll tmp = a[0], tmp1 = a[n-1];
    while(i < n && j >= 0){
        if(tmp == a[i])
            ans--;
        if(tmp1 == a[j])
            ans--;
        i++, j--;
    }

    cout << max((ll)0,ans);

    return 0;
}
