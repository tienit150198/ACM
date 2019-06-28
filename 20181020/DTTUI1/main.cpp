#include <bits/stdc++.h>
#define ll long long int
#define Max 1011
using namespace std;

ll n, m;
struct t{
    ll w, v;
};
t a[Max];

ll b[Max][Max];

ll isMax(ll a,ll b){
    return (a > b ?  a : b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i].w >> a[i].v;



    for(ll i = 0 ; i < n; i++){
        for(ll j = 1 ; j  <= m;  j++){
            b[i][j] = b[i-1][j];
            if(j >= a[i].w){
                b[i][j] = isMax(a[i].v + b[i - 1][j - a[i].w], b[i][j]);
            }
        }
    }


    for(ll i = 0 ; i < n; i++){
        for(ll j = 0 ; j < m; j++)
            cout << setw(3) << b[i][j];

        cout << endl;
    }

    return 0;
}
