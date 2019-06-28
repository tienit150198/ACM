#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD = 1e9 + 7;

struct MaTran{
    ll c[2][2];
    MaTran(){
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};

MaTran operator* (MaTran a, MaTran b){
    MaTran res;
    for(ll i = 0 ; i <= 1; i++){
        for(ll j = 0 ; j <= 1; j++){
            res.c[i][j] = 0;
            for(ll k = 0 ; k <= 1; k++){
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j])%MOD;
            }
        }
    }
    return res;
}

MaTran powMod(MaTran a, ll n){
    if(n == 1)
        return a;
    MaTran res = powMod(a,n/2);
    res = res * res;
    if(n%2 == 1){
        res = res * a;
    }
    return res;
}

int main()
{
    freopen("fibo.inp","r",stdin);
    freopen("fibo.out","w",stdout);
    ll n;
    cin >> n;
    MaTran A;
    A = powMod(A,n);
    cout << A.c[0][1];
    return 0;
}
