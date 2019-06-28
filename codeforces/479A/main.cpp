#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll a, b, c;

int main()
{
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;

    ll t = a+b*c;
    t = max(t,(a+b)*c);
    t = max(t,a*b*c);
    t = max(t,a*(b+c));
    t = max(t,a+b+c);

    cout << t;


    return 0;
}
