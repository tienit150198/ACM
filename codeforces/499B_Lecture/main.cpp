#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n, m;
string s[5000];
map<string,string> a;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(ll i = 0 ; i < m ; i++)
    {
        string x, y;
        cin >> x >> y;
        a[x] = y;
    }

    for(ll i = 0;  i< n; i++)
    {
        cin >> s[i];
    }


    for(ll i = 0 ; i < n; i++)
    {
        if(a[s[i]].size() < s[i].size())
            s[i] = a[s[i]];
    }

    for(ll i = 0 ; i < n; i++)
        cout << s[i] << " ";

    return 0;
}

