#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;

vector<ll> t;
ll n;

bool isCheck(ll a){
    ll tmp = a;
    ll s = 0;
    while(tmp > 0){
        s = s * 10 + tmp%10;
        tmp /=10;
    }
    return s == a;
}

ll _pow(ll a, ll n){
    if(n == 0)
        return 1;
    if(n == 1)
        return a;
    ll res = _pow(a,n/2);
    res *= res;
    if(n%2)
        res *= a;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    ll kt = _pow(10,n)-1;
    for(ll i = kt ; i >= kt - 1000 ; i--){ // 10^5
        for(ll j = kt ; j >= kt - 1000 ; j--){
            if(isCheck(i*j)){
                t.push_back(i*j);
            }
        }
    }
    sort(t.begin(),t.end());
    cout << t[t.size()-1];

    return 0;
}
