#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

struct Matrix{
    ll c[2][2];
    Matrix(){
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};
Matrix operator* (Matrix a, Matrix b){
    Matrix res;

    for(ll i = 0 ; i < 2; i++){
        for(ll j = 0 ; j < 2; j++){
            res.c[i][j] = 0;
            for(ll k = 0; k < 2; k++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j])%MOD;
            }
        }
    }
    return res;
}

Matrix power(Matrix a, ll n){
    if(n == 1){
        return a;
    }
    Matrix res = power(a,n/2);
    res = res * res;
    if(n%2){
        res = res * a;
    }
    return res;
}


int main(){
    ll n;
    cin >> n;
    Matrix a;

    a = power(a,n);
    cout << a.c[1][1];

    return 0;
}
