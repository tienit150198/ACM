#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;

vector<ll> a;

void sieve() {
    bool p[Max];
	for(ll i = 2 ; i * i <= Max ; i++){
        if(!p[i]){
            for(ll j = i * i ; j < Max;  j += i)
                p[j] = true;
        }
	}
	for(ll i = 2 ; i < Max ; i++)
        if(!p[i])
            a.push_back(i);
}

bool slove(ll n){
    ll q = a.size();
    for(ll i = 0 ; i < q && n > 1; i++ ){
        if(n%a[i] == 0 && a[i] > 5)
            return false;
        while(n%a[i] == 0){
            n /= a[i];
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    sieve();
    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n == 1){
            cout <<"YES" << endl;
            continue;
        }
        if(slove(n)){
            cout << "YES" << endl;
        }
        else
            cout <<"NO" << endl;
    }

    return 0;
}
