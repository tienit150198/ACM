#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[1000][1000];
ll n;
void init(){
    ll i = 0;
    ll t = 0, l = n - 1, r = 0, b = n - 1;
    ll tmp = n - 1;
    ll c = 0;
    while(c <= n * n && i < n){
        for(t = i; t < tmp ; t++)
            a[i][t] = c++;
        for(r = i; r < tmp ; r++)
            a[r][tmp] = c++;
        for(b = tmp; b >i ; b--)
            a[tmp][b] = c++;
        for(l = tmp; l > i ; l--)
            a[l][i] = c++;

        i++;
        tmp--;
    }
    if(n%2){
        a[n/2][n/2] = n*n - 1;
    }
}

void out(){
    for(ll i = 0 ; i < n; i++){
        for(ll j = 0 ; j < n; j++ )
            cout << a[i][j] << " ";

        cout << endl;
    }
}

int main()
{
    cin >> n;
    init();
    out();
  //  cout << a[--i][--j];
    return 0;
}
