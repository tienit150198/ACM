#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;



int main()
{
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    ll s = 0;
    ll i = 0;
    while(i < n){
        s += (n - i) * i;
        i++;
    }
    cout << s + n;

    return 0;
}
