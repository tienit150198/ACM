#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

struct m{
    ll a, b;
};

bool cmp(m a, m b){
    return a.a + a.b > b.a + b.b;
}

ll n;
m x[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n ; i++)
        cin >> x[i].a >> x[i].b;

    sort(x,x+n,cmp);

    ll ta = 0, ao = 0;
    bool f = false;
    for(ll i = 0 ; i < n ; i++){
        if(!f)
            ta += x[i].a;
        else
            ao += x[i].b;
        f = !f;
    }
    cout << ta - ao;

    return 0;
}
