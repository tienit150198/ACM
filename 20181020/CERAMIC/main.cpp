#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define debug(a,st,en) {for(ll i = st; i <= en ; i++) cout << a[i] << " "; cout << endl;}
using namespace std;

ll n;
vector<ll> a(Max,0);
vector<ll> uoc;
ll r, p,q;

void check(vector<ll> a, ll x) {
    for(ll i = 0 ; i < n; i+=x) {
        sort(a.begin() + i, a.begin() + i + x);

//        for(ll i = 0 ; i < n; i++)
//            cout << a[i] << " ";
//        cout << endl;
    }
    ll c = 0;
    for(ll i = 0 ; i < n; i += x) {
        bool flag = true;
        for(ll j = 0 ; j < x ; j++) {
            if(a[i + j + x] != a[i + j] && (i + j + x) < n) {
                flag = false;
                break;
            }
        }
        if(flag) {
            c++;
        }
    }
    cout << x << " " << c<< " " << n/x - c << endl;
}

int main() {
    ios::sync_with_stdio(false);
    freopen("CERAMIC.INP","r", stdin);
//    freopen("CERAMIC.OUT","w", stdin);
    cin >> n;
    ll tmp;
    for(ll i =  0 ; i < n; i++) {
        cin >> a[i];
    }

    ll j = 0;
    for(ll i =  2;  i <= sqrt(n); i++) {
        if(n%i == 0) {
            if(i != n/i) {
                uoc.push_back(i);
                uoc.push_back(n/i);
            } else
                uoc.push_back(i);
        }
    }

    if(uoc.size() != 0) {
        cout << uoc.size() << endl;
        for(ll i = 0 ; i < uoc.size(); i++) {
//            cout << uoc[i] << endl;
            check(a,uoc[i]);
        }
    } else
        cout << -1;


    return 0;
}
