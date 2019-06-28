#include <bits/stdc++.h>
#define ll long long int
#define MOD 10007
using namespace std;
ll n;
struct matrix{
    ll c[2][2];
    matrix(){
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};

matrix operator * (matrix a, matrix b){
    matrix res;
    for(ll i = 0 ; i < 2; i++){
        for(ll j = 0 ; j < 2; j++){
            res.c[i][j] = 0;
            for(ll k = 0 ; k < 2;  k++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j]) %MOD;
            }
        }
    }
    return res;
}

matrix powMod(matrix a, ll n){
    if(n == 1)
        return a;
    matrix res = powMod(a,n/2);
    res = res * res;
    if(n%2)
        res = res * a;

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    matrix a;
    a = powMod(a,n);

    cout << a.c[0][1];
    return 0;
}
