#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
string s;
ll a[Max], b[Max], _min=INT_MAX;
ll f(char x) {
    if(x>='A' && x<='Z' )
        return true;
    else
        return false;
}
int main() {
    cin >> s;
    ll x=0, y=0, dem=0, dem1=0;
    ll n=s.length();
    for(int i=0; i<n; i++) {
        if(!f(s[i]))
            dem++;
        a[i]=dem;

    }
    for(int i=n-1; i>=0; i--) {
        if(f(s[i]))
            dem1++;
        b[i]=dem1;
    }

//    for(ll i = 0 ; i < n ; i++){
//        cout << i << " : " << s[i] << " -> " << a[i] << " : " << b[i] << endl;
//    }

    for(int i=0; i<n; i++) {
        ll kq=a[i]+b[i];
        _min=min(_min,kq);
    }
    cout << _min-1;
    return 0;
}
