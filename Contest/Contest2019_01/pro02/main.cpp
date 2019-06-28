#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll f0, f1, f2;
ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    f0 = 1;
    f1 = 1;
    f2 = f1 + f0;

    for(ll i = 2 ;; i++){
        if(f2 >= n)
            break;
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    if(n == f2){
        cout <<"yes";
    }
    else
        cout <<"no";


    return 0;
}
