#include <bits/stdc++.h>
#define ll long long int
#define MOD 10007
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

Matrix operator *(Matrix a, Matrix b){
    Matrix res;

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            res.c[i][j] = 0;
            for(int k = 0 ; k < 2 ; k++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j]) %MOD;
            }
        }
    }
    return res;
}

Matrix _pow(Matrix a, ll n){
    if(n == 1)
        return a;
    Matrix res = _pow(a,n/2);
    res = res * res;
    if(n%2 == 1){
        res = res * a;
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;
    Matrix A;

    A = _pow(A,n);
    cout << A.c[0][1];

    return 0;
}
