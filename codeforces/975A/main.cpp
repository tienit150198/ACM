#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

string str[3000];

void init(ll n){
    for(ll i = 0 ; i < n; i++){
        str[i] = "00000000000000000000000000";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    init(n);
    ll ans = 1;
    for(ll i = 0 ; i < n; i++) {
        string tmp;
        cin >> tmp;
        for(ll j = 0 ; j < tmp.size(); j++){
            str[i][tmp[j]-97] = '1';
        }
    }
    sort(str,str + n);

    for(ll i = 0 ; i < n-1; i++){
//        cout << str[i] << endl;
        if(str[i] != str[i + 1])
            ans++;
    }

    cout << ans;

    return 0;
}
