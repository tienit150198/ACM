#include <bits/stdc++.h>
#define ll long long int
#define Max 22
using namespace std;

ll n, w;
ll a[Max];
ll _max = INT_MIN;

void out(ll b[], ll n){
    for(ll i = 0 ; i < n; i++){
        if(b[i])
            cout << a[i] << " ";
    }

    cout << endl;
}

void call(ll c[], ll n){
    ll res  = 0;
    for(ll i = 0; i < n; i++){
        if(c[i]){
            res += a[i];
        }
    }
    if(res <= w && res > _max)
        _max = res;
}

void gen(ll a[], ll n){
    for(ll i = 0 ; i < n; i++){
        a[i] = 0;
    }
    ll i = n - 1;
    while(true){
        i = n-1;
      //  out(a,n);
        call(a,n);
        while(i >= 0 && a[i] == 1)
            i--;

        if(i < 0){
            break;
        }

        a[i] = 1;
        for(ll j = i + 1; j < n; j++){
            a[j] = 0;
        }
    }
}

int main(){
    cin >> n >> w;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
    }

    ll b[Max];
    gen(b,n);

    cout << _max;
    return 0;
}
