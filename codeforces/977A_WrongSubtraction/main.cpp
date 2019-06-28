#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, k;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> k;

    while(k--){
        if(n%10 != 0)
            n--;
        else
            n /= 10;
    }
    cout << n;

    return 0;
}
