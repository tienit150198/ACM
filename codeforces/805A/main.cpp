#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll l, r;

int main()
{
    ios::sync_with_stdio(false);
    cin >> l >> r;

    ll tmp = r - l;
    if(tmp <= 1){
        cout << l;
    }
    else if(tmp == 3 && l % 3 == 0 && r % 3 == 0){
        cout << 3;
    }
    else{
        cout << 2;
    }


    return 0;
}
