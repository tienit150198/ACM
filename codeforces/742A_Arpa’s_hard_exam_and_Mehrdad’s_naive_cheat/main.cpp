#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    if(n == 0){
        cout << 1;
        return 0;
    }
    ll tmp = n%4;
    if(tmp == 1)
        cout << 8;
    else if(tmp == 2)
        cout << 4;
    else if(tmp == 3)
        cout << 2;
    else
        cout << 6;

    return 0;
}

