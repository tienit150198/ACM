#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[2000];


void f(ll a[], ll n){
    if(n == 1)
        return;

    f(a,n-1);
    swap(a[n-1],a[n]);
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cout << n << " ";
    for(ll i = 1; i < n ; i++)
        cout << i << " ";

    return 0;
}
