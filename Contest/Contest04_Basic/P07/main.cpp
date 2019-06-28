#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;

    string res = "";
    if(n > 10 || n == 0)
        cout << -1;
    else{
        ll i = 9;
        while(n--){
            res += i + '0';
            i--;
        }

        cout << res;
    }



    return 0;
}
