#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;

ll n;
vector<ll> a;

void sieve(){
    bool p[Max];
    ll q = sqrt(Max);
    for(ll i = 2 ; i <= q ; i++){
        if(!p[i]){
            for(ll j = i*i; j < Max ; j += i){
                p[j] = true;
            }
        }
    }
    for(ll i = 2 ; i < Max ;i++)
        if(!p[i])
            a.push_back(i);
}

void slove(ll n){
    ll q = a.size();
    for(ll i = 0 ; i < q;  i++){
        ll t = 0;
        while(n%a[i] == 0){
            n /= a[i];
            t++;
        }
        if(t)
            cout << a[i] << " " << t << endl;
    }
    if(n > 1){
        cout << n << " " << 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    sieve();
    cin >> n;

    slove(n);

    return 0;
}
