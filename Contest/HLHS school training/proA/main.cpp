#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string str, str1;
ll n, res =0;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;
    cin >> str1;

    ll c = 0;
    for(ll i = 0 ; i < str.length(); i++){
        if(str[i] == str1[i])
            c++;
    }
    if(c < n){
        res = str.length();
        res = res - n + c;
    }
    else{
        res += n;
        ll tmp = str.length();
        c -= n;
        tmp = tmp - n - c;
        res = res + tmp;
    }
    cout << res;
    return 0;
}
