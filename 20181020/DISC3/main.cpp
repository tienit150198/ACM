#include <bits/stdc++.h>
#define ll long long int
#define Max 200017
using namespace std;

ll n,m, j;
ll a[Max],t[Max];

ll get(ll i){
    ll res = 0;
    while(i > 0){
        res += t[i];
        i -= i & - i;
    }
    return res;
}

void up(ll i, ll value){
    while(i <= j){
        t[i] += value;
        i += i & -i;
    }
}

int main()
{
    cin >> n >> m;
    j = m + n;
    for(ll i = n; i >= 1 ; i--){
        a[i] = i + m;
        up(a[i],1);
    }

 /*   for(ll i = 1 ; i <= n+m; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(ll i = 1;  i<= n+m; i++){
            cout << t[i] << " ";
    }*/
    ll tmp;
    for(ll i = 1 ; i <= m; i++){
        cin >> tmp;
        cout << get(a[tmp]) - 1 << " ";
        up(a[tmp],-1);
        a[tmp] = m-i+1;
        up(a[tmp],1);

    }


    return 0;
}
