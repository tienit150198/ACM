#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

double giaithua(ll a){
    double p = 1;
    for(ll i = 2; i <= a; i++)
        p *= i;

    return p;
}

int main()
{
    ll x, d, t, k = 2;
    cin >> x >> d >> t;

    float Cx = giaithua(x)/(giaithua(k)*giaithua(x - k));
    float Cd = giaithua(d)/(giaithua(k)*giaithua(d - k));
    float Ct = giaithua(t)/(giaithua(k)*giaithua(t - k));
    ll tmp = x + d + t;

    float C = giaithua(tmp)/(giaithua(k)*giaithua(tmp - k));

    float s = (Cx + Cd + Ct);

    s /=  C;

    printf("%.2f", s);

    return 0;
}
