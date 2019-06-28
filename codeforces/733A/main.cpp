#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;
string str;
ll a[Max];
int main()
{
    ios::sync_with_stdio(false);
    cin >> str;

    ll num = 0;
    ll _max = INT_MIN;
    a[num++] = 0;
    for(ll i = 0 ; i < str.size(); i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y'){
            a[num++] = i+1;
        }
    }
    a[num++] = str.size()+1;
    _max = 0;


    for(ll i = 0 ; i  < num-1; i++)
        _max = max(a[i+1] - a[i],_max);

    cout << _max;


    return 0;
}
