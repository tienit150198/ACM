#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

ll i = 0;
ll a[Max];
ll m, l , r;
int main()
{
    fast
    string str;
    cin >> str;
    ll n = str.size(), c = 0;
    str = " " + str;
    for(ll i = 2 ; i <= n; i++){
        if(str[i] == str[i - 1])
            c++;
        a[i] = c;
    }

//    for(ll i = 1 ; i <= n ; i++)
//        cout << a[i] << " ";
//    cout << endl;
    cin >> m;

    while(m--){
        cin >> l >> r;

        cout << a[r] - a[l] << endl;
    }


    return 0;
}
