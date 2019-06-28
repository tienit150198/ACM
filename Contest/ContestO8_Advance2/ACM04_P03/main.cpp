#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;

vector<ll> pi;

ll isMax(ll a, ll b){
    return (a > b ? a : b);
}

void sieve(ll l, ll r){
    bool p[r - l + 1];
    for(ll i = l ; i <= r;  i++)
        p[i-l] = true;

    for(ll i = 2 ; i * i <= r; i++){
        for(ll j = max(i*i, (l + (i-1)) / i*i ); j <= r ; j += i){
            p[j - l] = false;
        }
    }

    for(ll i = isMax(l, 2) ; i <= r ; i++){
        if(p[i-l])
            pi.push_back(i);
    }

}

ll a,b, res = 0;;
int main() {
    ios::sync_with_stdio(false);

    cin >> a >> b;
    sieve(a,a + b);

   /* for(ll i = 0 ; i < pi.size(); i++)
        cout << pi[i] << endl;*/

    ll i = 0;
    ll n = pi.size();
    b = a + b;
    while(i < n){
     //   cout << i << " " << pi[i] << endl;
        if(pi[i] >= a && pi[i] <= b){
            res++;
            i++;
        }
        else if(pi[i] < a)
            i++;
        else if(pi[i] > b)
            break;
    }
    cout << b - a + 1 - res;

    return 0;
}
