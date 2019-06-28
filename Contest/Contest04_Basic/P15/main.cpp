#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;

    bool flag = false;
    while(n > 0){
        ll tmp = n%10;
        if(tmp == 4 || tmp == 7){
            n /= 10;
            continue;
        }
        flag = true;
        break;
    }

    if(flag){
        cout << "NO";
    }
    else
        cout <<"YES";

    return 0;
}
