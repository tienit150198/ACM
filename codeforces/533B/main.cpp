#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

map<string,ll> t;
ll n, k;

string arr[Max];
ll num = 0;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    string str;
    cin >> str;
    string tmp;
    ll c = 0;
    for(ll i = 0 ; i < n - k + 1 ; i++) {
        tmp = "";
        for(ll j = i ; j < i + k ; j ++)
            tmp += str[j];

        if(i <= k) {
            bool flag = false;
            for(ll kt = 0 ; kt < num ; kt++)
                if(tmp == arr[kt]) {
                    flag = true;
                    break;
                }
            if(!flag) {
                cout << tmp << endl;
                t[tmp]++;
                arr[num++] = tmp;
            }
        } else {
            if(arr[i - k
               ] != tmp) {
                cout <<i - k << " -> " << arr[i - k] << " " << tmp << endl;
                t[tmp]++;
                arr[num++] = tmp;
            }
        }
    }

    ll ans = 0;

    map<string,ll>::iterator it = t.begin();
    tmp = "";
    while(it != t.end()) {
        if(ans <= it->second){
            tmp = it->first;
            ans = it->second;
        }
        it++;
    }
    if(ans == 1){
        ll i = 0;
        for(i = 0 ; i < num ; i++){
            if(arr[i] == tmp)
                break;
        }
        bool flag = false;
        for( ; i < num ; i+= k){
            if(arr[i] != tmp){
                flag = true;
                break;
            }
        }
        if(flag)
            cout << ans;
        else
            cout << 0;
    }else
        cout << ans;

    return 0;
}
