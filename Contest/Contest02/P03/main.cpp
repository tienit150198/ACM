#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;
string a[Max];
ll n;
map<string,bool> t;
int main()
{


    cin >> n;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i];

    sort(a,a+n);

    for(ll i = 0 ; i < n; i++){
        if(!t[a[i]]){
            cout << a[i] << endl;
            t[a[i]]++;
        }
    }

    return 0;
}
