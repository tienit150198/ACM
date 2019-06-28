#include <bits/stdc++.h>
#define ll long long int
#define Max 1000000007
using namespace std;

set<ll> x;

ll isTok(ll s, ll a){
    ll t = 0;
    while(s > 0){
        t += s%10;
        s /= 10;
    }
    ll tmp = t;
    for(int i = 0 ;i < a-1 ;i++)
        t *= tmp;
    return t;
}
bool isTrue(ll xx, ll a, ll b, ll c){
    ll res = b * isTok(xx,a) + c;
    if(res < 0 || res > Max || res != xx)
        return false;
    return true;
}

int main() {
   // freopen("test.in","r",stdin);
    ll a, b, c;
    cin >> a >> b >> c;
    ll i;
    for(i = 0 ; i < 10000007 ; i++){
        if(isTrue(i,a,b,c)){
            x.insert(i);
        }
    }
    if(a == 1)
        x.insert(1000000000);
    cout << x.size() << endl;
    set<ll>::iterator it = x.begin();
    while(it != x.end()){
        cout << *it << " ";
        it++;
    }
   // cout << isTrue(2008,a,b,c);


    return 0;
}
