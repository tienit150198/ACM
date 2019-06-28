#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, v;

vector<ll> t;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> v;

    for(ll i = 0 ; i < n; i++){
        ll num;
        bool checkDeal = false;;
        cin >> num;
        while(num--){
            ll price;
            cin >> price;

            if(price < v){
                checkDeal = true;
            }
        }
        if(checkDeal == true){
            t.push_back(i+1);
        }
    }

    cout << t.size() << endl;

    for(ll i = 0 ; i < t.size() ; i++){
        cout << t[i] << " ";
    }


    return 0;
}
