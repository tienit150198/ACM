#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, m;

int main()
{
    ios::sync_with_stdio(false);

    cin >> n >> m;
    bool flag = false;
    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m; j++){
            char tmp;
            cin >> tmp;
            if(tmp == 'W' || tmp == 'B' || tmp == 'G')
                continue;
            else
                flag = true;
        }
    }
    if(flag)
        cout <<"#Color";
    else
        cout <<"#Black&White";

    return 0;
}
