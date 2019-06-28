#include <bits/stdc++.h>
#define ll long long int
#define BASE 1000000000000000000ull
using namespace std;

const ll MOD = 111539786;

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
    for(int i = 0 ; i < 2; i++){
        for(int j = 0 ; j < 2; j++){
            res.c[i][j] = 0;
            for(int k = 0 ; k < 2; k++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j]);
            }
        }
    }
    if(res > BASE){
        res
    }
    return res;
}

Matrix powMod(Matrix a, ll n){
    if(n == 1)
        return a;

    Matrix res = powMod(a,n/2);
    res = res * res;
    if(n%2 == 1)
        res = res * a;
    return res;
}

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        Matrix a;
        a = powMod(a,n);
     /*   for(int i = 0 ; i < 2; i++){
            for(int j = 0 ; j < 2; j++)
                cout << a.c[i][j]<< endl;
        }
        cout << endl;*/
        cout << a.c[1][1] << endl;
    }

    return 0;
}
