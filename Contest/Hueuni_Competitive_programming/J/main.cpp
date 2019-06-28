#include <bits/stdc++.h>
#define ll long long int
#define Max 30000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

struct m{
    ll val, r;
};

bool cmp(m a, m b){
    return a.val < b.val;
}

ll n;
m a[Max];

ll pow(ll a, ll n) {
    if(n == 0)
        return 1;
    if(n == 1)
        return a;
    ll t = pow(a,n/2);
    t *= t;
    if(n%2)
        t = t * a;

    return t;
}

int main() {
    fast
    cin >> n;
    n = pow(2,n);
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i].val;
    }

    sort(a,a+n,cmp);
    ll x = 1, k = 1;
    a[0].r = 0;
    for(ll i = 0 ; i < n ; i++){
        x = pow(2,k);


    }




    return 0;
}
/*
double pi = 8 * 100.0/13;
	cout << fixed << setprecision(6) << pi <<endl;
    làm tròn
*/
