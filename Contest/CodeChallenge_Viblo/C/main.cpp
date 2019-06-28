#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll n;
struct m{
    ll c, h;
};

bool cmp(m a, m b){
    return a.c < b.c;
}

m a[Max];
ll f[Max];

int main() {
    fast
    cin >> n;

    for(ll i = 0 ; i < n ; i++){
        cin >> a[i].c >> a[i].h;
    }

    sort(a,a+n,cmp);
    ll ans = 0;
    f[0] = a[1].c - a[0].c;
    for(ll i = 1 ; i < n-1; i++){
        if(a[i].h < f[i-1])
            f[i] = a[i + 1].c - a[i].c;
        else if(a[i].h >= f[i - 1] && a[i].c + a[i].h < a[i+1].c)
            f[i] = a[i + 1].c - (a[i].c + a[i].h);
        else{
            f[i] = a[i+1].c - a[i].c;
            ans++;
        }
    }
    cout << n-ans;

    return 0;
}
