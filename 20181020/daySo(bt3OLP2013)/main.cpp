#include <bits/stdc++.h>
#define ll long long int
#define MaxN 30000
#define ipair pair<ll,ll>

using namespace std;

ll n;
ll a[MaxN], l[MaxN];

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(ll i = 0 ; i < MaxN ; i++)
        l[i] = 1;

    cin >> n;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
    }
    // 0 1 1 2 3 5 8
    ll _max = 0;
    for(ll i = 2 ; i < n; i++){
        if(a[i] == a[i - 1] + a[i - 2]){
            if(_max <= l[i])
                _max = l[i - 1] + 1;
        }
        else{
            _max = 0;
        }
        if(_max){
            l[i] =  _max;
            _max = 0;
        }

    }
    cout << endl << endl;
    for(ll i = 0 ; i < n; i++)
        cout << a[i] << " ";

    cout << endl;


    for(ll i = 0 ; i < n; i++)
        cout << l[i] << " ";


    return 0;
}
