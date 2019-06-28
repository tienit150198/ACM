#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll d[] = {0,6,5,4,3,2,1};
    ll _max = n * 6;
    ll _min = n/6 + d[n%6];

    cout <<_min << " " << _max;



    return 0;
}
