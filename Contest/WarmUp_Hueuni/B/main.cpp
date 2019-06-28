#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll t, n;
string str = "";
int main(){
    fast
    cin >> t;

    for(ll i = 1 ; i <= Max ; i++){
        string tmp = "";

        ll x = i;
        while(x > 0){
            tmp = tmp + (char)(x%10 + 48);
            x /= 10;
        }
        reverse(tmp.begin(), tmp.end());
        str += tmp;
    }

   // cout << str;

    while(t--){
        cin >> n;
        string tmp = "";
        while(n > 0){
            tmp = tmp + (char)(n%10 + 48);
            n /= 10;
        }
        reverse(tmp.begin(), tmp.end());
      //  cout << tmp << " -> ";
        cout << str.find(tmp) + 1 << endl;

    }

    return 0;
}
