#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

string str;
ll n;

map<char,ll> t;
char a[] = {'A','G','C','T'};

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;
    if(n%4 != 0) {
        cout << "===";
        return 0;
    }

    t['A'] = n/4;
    t['G'] = n/4;
    t['C'] = n/4;
    t['T'] = n/4;
    ll indx[255];
    ll num = 0;
    for(ll i = 0 ; i < n ; i++) {
        if(str[i] == '?')
            indx[num++] = i;
        else {
            t[str[i]]--;
        }
    }

    ll i = 0;
    for(ll j = 0 ; j < num ; j++) {
        while(!t[a[i]])
            i++;
        if(t[a[i]]) {
            str[indx[j]] = a[i];
            t[a[i]]--;
        }
    }
    map<char,ll>::iterator it = t.begin();

    while(it != t.end()) {
        if(it->second) {
            cout << "===";
            return 0;
        }
        it++;
    }

    cout << str;

    return 0;
}
