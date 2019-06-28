#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

ll n;
struct m{
    ll x, h;
};

m a[Max];
ll f[Max];
int main() {
    fast
    cin >> n;

    for(ll i = 0 ; i < n ; i++)
        cin >> a[i].x >> a[i].h;
//
//    for(ll i = 1 ; i < n ; i++){
//        f[i] = a[i].x - a[i - 1].x;
//    }

    ll c = (n == 1 ? 1 : 2);
    for(ll i = 1 ; i < n - 1 ; i++){
        if(a[i].x - a[i - 1].x > a[i].h)
            c++;
        else if(a[i + 1].x - a[i].x > a[i].h){
            c++;
            a[i].x += a[i].h;
        }
    }
    cout << c;


    return 0;
}
