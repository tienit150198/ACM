#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    ll t = n/7;
    ll t1 = n%7;

    ll _min = t * 2 + t1/6;
    ll _max = t * 2 + min(t1,(ll)2);

    cout << _min << " " << _max;


    return 0;
}
