#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll x;
ll a[] = {1,5,10,50,100,500};

struct t{
    ll d, c;
    t(){
        c = 0;
    }
};

t k[7];

bool cmp(t a, t b){
    return a.d > b.d;
}

int main()
{
    ios::sync_with_stdio(false);

    for(ll i = 0 ; i < 6; i++){
        cin >> k[i].c;
        k[i].d = a[i];
    }
    cin >> x;

    sort(k, k + 6,cmp);

    ll i = 0;
    ll res = 0;
    while(i <= 6 && x > 0){
        if(k[i].c > 0 && (x - k[i].d) >= 0){
            k[i].c--;
            x -= k[i].d;
            res++;
            continue;
        }
        i++;
    }

    if(x < 0 || x > 0)
        cout << -1;
    else
        cout << res;


    return 0;
}
