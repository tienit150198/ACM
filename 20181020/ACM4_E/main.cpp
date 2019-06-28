#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a, b, c;
int main()
{
    cin >> a >> b >> c;
    if(a%c == b%c){
        cout <<"YES";
    }
    else
        cout <<"NO";
    return 0;
}
