#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll a, b, c, d;
ll resM, resV;

ll getPoint(ll p, ll t) {
    return max((p*3) / 10,  p - (p / 250) * t );
}

int main() {
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d;

    resM = getPoint(a,c);
    resV = getPoint(b,d);

    if(resM == resV)
        cout << "Tie";
    else if(resM > resV)
        cout << "Misha";
    else
        cout << "Vasya";

    return 0;
}
