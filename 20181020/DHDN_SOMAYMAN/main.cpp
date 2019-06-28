#include <bits/stdc++.h>
#define ll long long int

using namespace std;
set<ll> isSet;
ll n;

void out(ll a[], ll Max){
    for(ll i = 0 ;  i < Max; i++)
        cout << a[i];
    cout << "   ";
}

void conv(ll a[], ll Max, ll x, ll y){
    ll res =0;
    for(ll i = 0 ; i < Max; i++){
        ll tmp = x;
        if(a[i] == 1){
            tmp = y;
        }
        res = res * 10 + tmp;
    }
  //  cout << "res = " << res << " " << endl;
    if(res <= n){
        isSet.insert(res);
    }
}

void gen(ll a[], ll Max, ll x, ll y){
    for(ll i = 0 ; i < Max ;i++){
        a[i] = 0;
    }
    ll i = Max - 1;
    while(true){
        i = Max - 1;
    //    out(a,Max);
        conv(a,Max,x,y);
        while(a[i] == 1 && i >= 0) i--;

        if(i < 0)
            return;

        a[i] = 1;
        for(ll j = i+1 ; j < Max ; j++){
            a[j] = 0;
        }
    }
}

int main(){
    cin >> n;

    ll a[10];

    ll number = 1;
    if(n != 0){
        number = log10(n) + 1;
    }

    for(ll k = 1 ; k <= number; k++){
        for(ll i = 0 ; i < 10 ; i++){
            for(ll j = i ; j < 10 ; j++){
                gen(a,k,i,j);
            }
        }
    }
  /*  set<ll>::iterator it;
    for( it = isSet.begin() ; it != isSet.end(); it++ ){
        cout << *it << endl;
    }*/

    cout << isSet.size() - 1;

    return 0;
}
