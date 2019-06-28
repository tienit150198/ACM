#include <bits/stdc++.h>
#define ll long long int
#define Max 30000
using namespace std;

ll n;
ll a[Max], l[Max];

void init(){
    for(ll i = 0 ; i < n; i++){
        a[i] = 0;
        l[i] = 0;
    }
}
void out(ll a[], ll n){
    for(ll i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    cin >> n;

    init();

    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
    }

    ll _max = 0;
    l[0] = 1;
    l[1] = 1;
    for(ll i = 2 ; i < n; i++){
        if(a[i - 2] + a[i - 1] == a[i]){
            if(l[i-1] >= _max){
                _max = l[i - 1] + 1;
            }
        }
        else{
            _max = 1;
        }
        l[i] = _max;
    }
    _max = l[0];
    for(ll i = 1 ; i < n; i++){
        _max = max(l[i],_max);
    }
    if(_max == 1){
        _max = -2;
    }
    cout << _max + 1;

    return 0;
}
