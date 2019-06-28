#include <bits/stdc++.h>
#define ll long long int
#define Max 1011
using namespace std;

ll a[Max][Max];
ll n;

void out(ll n){
    for(ll i = 0 ; i < n; i++){
            for(ll j = 0; j < n; j++)
                cout << setw(3) << a[i][j];

            cout << endl;
        }

    cout << endl << endl;
}

void init(){
    ll c = 0;
    ll i = 0, j = 0;
    ll t = 0, tmp = n;
    while(c <= tmp*tmp){
        t = i;
        for(ll k = i ; k < n; k++)
            a[i][k] = ++c;

        for(ll k = i+1 ; k < n-1; k++)
            a[k][n-1] = ++c;

        for(ll k = n - 1; k >= i ; k--){
            a[n-1][k] = ++c;
        }

        for(ll k = n-2 ; k > i; k--)
            a[k][i] = ++c;
        out(n);
        i++;
        n--;

    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    init();



    return 0;
}
