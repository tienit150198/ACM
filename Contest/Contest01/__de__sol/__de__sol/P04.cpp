#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

struct matrix {
    ll c[2][2];
    matrix() {
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};

matrix operator * (matrix a, matrix b) {
    ll i, j, k;
    matrix c;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            c.c[i][j] = 0;
            for(k = 0; k < 2; k++) {
                c.c[i][j] = (c.c[i][j] + a.c[i][k] * b.c[j][k]) % mod;
            }
        }
    }
    return c;
}

matrix power(matrix a, ll k) {
    if(k <= 1) {
        return a;
    }
    if(k % 2 != 0) {
        return a * power(a, k-1);
    }
    matrix t = power(a, k/2);
    return t * t;
}

ll n;

int main() {
    ios::sync_with_stdio(false);
	freopen("07.in", "r", stdin);
	freopen("07.ans", "w", stdout);
    
	cin >> n;

    matrix a;
    a = power(a, n+1);
    cout << a.c[0][1];

    return 0;
}

