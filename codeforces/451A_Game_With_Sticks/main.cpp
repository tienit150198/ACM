#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    bool flag = true;
    while(m && n){
        flag = !flag;
        m--;
        n--;
    }
    if(flag)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}
