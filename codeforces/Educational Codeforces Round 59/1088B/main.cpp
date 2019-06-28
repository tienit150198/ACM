#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n, k;
ll a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;

    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];

    sort(a,a+n);
    ll _sum = a[0];
    ll i = 0;
    while(k--){
        cout << a[i] << endl;
        a[i] = 0;
        i++;
        a[i] -= _sum;

        while(a[i] <= 0 && i < n){
            i++;
            a[i] -= _sum;
        }
        if(i == n)
            i--;
        if(a[i] < 0)
            a[i] = 0;

        _sum += a[i];
    }

    return 0;
}
