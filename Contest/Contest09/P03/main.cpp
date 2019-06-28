#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;
ll n;
vector<ll> a, b;
ll d[Max];

bool cmp(ll a, ll b){
    return a > b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll t;
    for(ll i = 0 ; i < n; i++){
        cin >> d[i];
        if(d[i] < 0)
            a.push_back(d[i]);
        else
            b.push_back(d[i]);
    }
    if(n == 1){
        cout << d[0];
    }
    else if(n == 2){
        cout << d[0] * d[1];
    }
    else{
        sort(a.begin(),a.end(), cmp);
        sort(b.begin(), b.end(), cmp);
        if(a.size() < 2){
            cout << b[0]*b[1];
        }
        else if(b.size() < 2){
            cout << a[0]*a[1];
        }
        else
            cout << max(b[0]*b[1], a[0]*a[1]);
    }




    return 0;
}
