#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define ipair pair<ll,ll>

using namespace std;

string str;

bool vst[1000007];

int main() {
    ios::sync_with_stdio(false);
    cin >> str;

    ll c = 0;
    for(ll i = 0 ; i < str.size() - 1 && str.size() ; i++) {
        if(str[i] == str[i + 1]) {
            str.erase(i,2);
            i -= 2;
            c++;
        }
    }

    if(c%2) {
        cout <<"Yes";
    } else
        cout <<"No";

    return 0;
}
