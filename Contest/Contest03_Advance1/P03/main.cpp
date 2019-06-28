#include <bits/stdc++.h>
#define ll long long int
#define Max 1011
using namespace std;

ll n, W;

struct m{
    ll w,v;
};

m a[Max];

void out(ll a[], ll n){
    for(ll i = 0 ; i  <n; i++)
        cout << a[i];

    cout << endl;
}


void gen(ll a[], ll n){
    for(ll i = 0 ; i < n; i++)
        a[i] = 0;
    ll i = n - 1;
    while(true){
        i = n - 1;
   //     out(a,n);
        while(i >= 0 && a[i] == 1)
            i--;
        if(i < 0)
            break;

        a[i] = 1;
        for(ll j = i + 1 ; j < n; j++)
            a[j] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
//    cin >> n >> W ;

//    for(ll i = 0 ; i < n; i++){
//        cin >> a[i].w >> a[i].v;
//    }

    ll b[1001];
    n = 100;
    gen(b,n);
    cout << "ab";

    return 0;
}
