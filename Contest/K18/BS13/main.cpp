#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

double giaithua(ll a){
    double p = 1;
    for(ll i = 2; i <= a; i++)
        p *= i;

    return p;
}

int main()
{
    fast
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
