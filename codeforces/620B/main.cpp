#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll a, b;
ll seg[] = {6,2,5,5,4,5,6,3,7,6};

int main() {
    ios::sync_with_stdio(false);
    cin >> a >> b;

    ll total = 0;

    for(ll i = a ; i <= b ; i++){
        string str = "";
        ll j = i;
        while(j > 0){
            str += j % 10;
            j /= 10;
        }

        for(ll k = 0 ; k < str.size() ; k++)
            total += seg[str[k]];

    }
    cout << total;

    return 0;
}
